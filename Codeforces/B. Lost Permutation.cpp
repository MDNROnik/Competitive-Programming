#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios_base::sync_with_stdio(false);
    ll test;cin>>test;
    while(test--){
        ll m,s;cin>>m>>s;
        map<ll,ll>mp;ll maxx=0;
        map<ll,ll>::iterator it;
        for(int i=0;i<m;i++){
            ll a;cin>>a;
            mp[a]++;
            if(maxx<a){
                maxx=a;
            }
        }
        ll i=1,sum=0,count=0,c=0,siz=mp.size();
        while(1){
            it = mp.find(i);
            if(it==mp.end()){
                sum+=i;c++;
            }
            if(sum==s){
                //cout<<mp.size()<<" "<<c<<endl;
                //cout<<mp.size()+c<<endl;
                if((mp.size()+c) < maxx){
                    cout<<"NO"<<endl;
                }
                else{
                    cout<<"YES"<<endl;
                }
                break;
            }
            else if(sum>s){
                cout<<"NO"<<endl;break;
            }
            //cout<<i<<" "<<sum<<endl;
            i++;
        }
    }
    return 0;
}