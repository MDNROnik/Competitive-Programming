#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;cin>>t;
    while(t--){
        ll n,m;cin>>n>>m;
        vector<int>v(1, 0);
        for(int i=0;i<n;i++){
            ll a;cin>>a;
            v.push_back(a);
        }
        ll ans=0;n++;
        for(int i=1;i<n;i++){
            ll now = (v[i] - v[i-1]);
            ans = max(ans, now);
        }
        ans = max(ans, ((m-v[n-1])*2) );
        cout<<ans<<endl;
    }
 
}