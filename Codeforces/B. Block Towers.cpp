#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test;cin>>test;
    while(test--){
        ll n;cin>>n;
        map<ll,ll>mp;
        map<ll,ll>::iterator it;
        ll one;
        for(ll i=0;i<n;i++){
            ll a;cin>>a;
            if(i==0){
                one=a;
            }
            mp[a]++;
        }
        vector<ll>vec;
        for(it=mp.begin();it!=mp.end();it++){
            ll temp=it->second;
            for(ll i=0;i<temp;i++){
                vec.push_back(it->first);
            }
        }
        for(ll i=0;i<n;i++){
            if(one<vec[i]){
                ll temp=vec[i]-one;;
                if(temp%2==0){
                    temp/=2;
                    one+=temp;
                }
                else{
                    temp/=2;
                    one+=temp;one++;
                }
            }
        }
        cout<<one<<endl;
    }
    return 0;
}