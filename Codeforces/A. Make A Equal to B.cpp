#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    ios_base::sync_with_stdio(false);
    ll test;cin>>test;
    while(test--){
        vector<ll>a,b;
        map<ll,ll>mpa,mpb;
        ll n;
        cin>>n;
        for(int i=0;i<n;i++){
            ll aa;cin>>aa;
            a.push_back(aa);//mpa[aa]++;
        }
        for(int i=0;i<n;i++){
            ll aa;cin>>aa;
            b.push_back(aa);//mpb[aa]++;
        }
        ll cnt=0;
        for(int i=0;i<n;i++){
            if(a[i]!=b[i]){
                mpa[a[i]]++;mpb[b[i]]++;cnt++;
            }
        }
        if(cnt==0){
            cout<<0<<endl;
        }
        else{
            //cout<<mpa[0]<<" "<<mpa[1]<<endl;
            if(mpa[0]==mpb[0] && mpa[1]==mpb[1]){
                cout<<1<<endl;
            }
            else if(mpa[0]==mpa[1]){
                cout<<1<<endl;
            }
            else if(mpa[0]<mpa[1]){
                ll temp=mpa[0];
                temp*=2;
                //cout<<mpa[1]-temp+1<<endl;
                if(temp==0){
                    cout<<mpa[1]<<endl;
                }
                else{
                    cout<<cnt-temp+1<<endl;
                }
            }
            else if(mpa[0]>mpa[1]){
                ll temp=mpa[1];
                temp*=2;
                //cout<<mpa[0]-temp+1<<endl;
                if(temp==0){
                    cout<<mpa[0]<<endl;
                }
                else{
                    cout<<cnt-temp+1<<endl;
                }
            }
        }
    }
}