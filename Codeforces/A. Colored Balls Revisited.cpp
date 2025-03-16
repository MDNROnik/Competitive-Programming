#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test;cin>>test;
    while(test--){
        ll n;cin>>n;
        map<ll,ll>mp;
        map<ll,ll>::iterator it;
        for(int i=1;i<=n;i++){
            ll a;cin>>a;
            mp[a]=i;
        }
        it=mp.end();
        it--;
        cout<<it->second<<endl;
    }
    return 0;
}
 