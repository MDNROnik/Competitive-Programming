#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test;
    cin>>test;
    while(test--){
        ll n;cin>>n;
        ll rr[n];
        map<ll,ll>mp;
        map<ll,ll>:: iterator it;
        for(ll i=0;i<n;i++){
            cin>>rr[i];
            mp[rr[i]]++;
        }
        ll to=0;
        for(it=mp.begin();it!=mp.end();it++){
            if(it->second >= 2){
                to+=it->second;
                to--;
            }
        }
        ll count=0;
        for(ll i=0;i<n;i++){
           if(to==0){break;}
           if(mp[rr[i]] >= 2){

                count++;mp[rr[i]]--;to--;
           }
           else{
            if(to!=0){
                count++;
            }
           }
        }
        cout<<count<<endl;
    }
    return 0;
}