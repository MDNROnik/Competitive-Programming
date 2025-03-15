#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define mod 1000000007

int main(){
    ios_base::sync_with_stdio(false);

    ll test;cin>>test;
    while(test--){
        ll n;cin>>n;
        ll a;
        map<ll,ll>mp;
        for(int i=0;i<n;i++){
            cin>>a;
            mp[a]=1;
        }
        ll t=10-mp.size();
        ll ans=0;t--;
        for(int i=1;i<=t;i++){
            ll temp=0;
            for(int j=i;j<=t;j++){
                temp+=6;
            }
            ans+=temp;
        }
        cout<<ans<<endl;
    }
}