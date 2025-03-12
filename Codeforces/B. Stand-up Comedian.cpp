#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define fastIo() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
int main()
{
    fastIo();
    ll test;cin>>test;
    map<pair<pair<ll,ll>,pair<ll,ll>>,ll>mp;
    while(test--){
        ll a,b,c,d;cin>>a>>b>>c>>d;
        ll p1=a,p2=b,p3=c,p4=d;
        pair<ll,ll>pf,ps;
        pf=make_pair(a,b);
        ps=make_pair(c,d);
        pair<pair<ll,ll>,pair<ll,ll>>p;
        p=make_pair(pf,ps);
        if(mp[p]!=0){
            cout<<mp[p]<<endl;continue;
        }

        ll count=a;
        if(a==0){
            if(b!=0 || c!=0 || d!=0){
                cout<<1<<endl;
            }
            else{
                cout<<0<<endl;
            }
            continue;
        }
        count=a;
        ll mid=min(b,c);
        b-=mid;c-=mid;
        ll t1=a,t2=a;
        count+=mid*2;
        //cout<<count<<endl;
        ll alice=a,bob=a;
        while(alice>=0 && bob>=0){
            //cout<<alice<<" "<<bob<<endl;
            if(b!=0 && bob!=0){
                if(bob>=b){
                    alice+=b;
                    bob-=b;
                    count+=b;b=0;
                }
                else if(bob<b){
                    alice+=bob;
                    count+=bob;
                    b-=bob;
                    bob=0;
                }
            }
            else if(c!=0 && alice!=0){
                if(alice>=c){
                    bob+=c;
                    count+=c;
                    alice-=c;
                    c=0;
                }
                else if(alice<c){
                    bob+=alice;
                    count+=alice;
                    c-=alice;
                    alice=0;
                }
            }
            else{
                break;
            }
        }
        ll maxx=min(alice,bob);

        if(maxx<d){
            count+=maxx;
            count++;
        }
        else{
            count+=d;
            alice-=d;bob-=c;
            if(b!=0 && bob>=0){
                count++;
            }
            else if(c!=0 && alice>=0){
                count++;
            }
        }
        cout<<count<<endl;
        mp[p]=count;
    }
    return 0;
}