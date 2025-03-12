#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define fastIo() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)

int main()
{
    fastIo();
    ll test;cin>>test;
    while(test--){
        ll n;cin>>n;
        map<ll,ll>mp;
        while(n--){
            ll a;cin>>a;
            mp[a]++;
        }
        ll ans=0;
        //cout<<min(mp.size(),mp.size()-1);
        for(auto a=mp.begin();a!=mp.end();a++){
            ll temp=a->second,s=mp.size();
            if(ans < min(s-1 , temp)){
                ans=min(s-1 , temp);
            }
            if(ans < min(s , temp-1)){
                ans=min(s , temp-1);
            }
        }
        cout<<ans<<endl;
    }


    return 0;
}