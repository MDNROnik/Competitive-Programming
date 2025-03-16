#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main(){
    ios_base::sync_with_stdio(false);
    ll test;cin>>test;
    while(test--){
        ll n;cin>>n;
        ll a;
        map<ll,ll>mp;
        map<ll,ll>::iterator it;
        for(int i=0;i<n;i++){
            cin>>a;
            mp[a]++;
        }
        ll cnt=0;
        for(it=mp.begin();it!=mp.end();it++){
            if(it->second>=2){
                cnt++;break;
            }
        }
        if(cnt==1){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
}