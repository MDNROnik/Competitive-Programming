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
        ll n;cin>>n;
        map<ll,ll>mp;
        for(int i=0;i<n;i++){
            ll a;cin>>a;
            mp[a]++;
        }
        ll left=0,ans=0;
        for(auto a : mp){
            a.second+=left;
            ans+=(a.second/a.first);
            left=a.second%a.first;
        }
        cout<<ans<<endl;

    }

}


