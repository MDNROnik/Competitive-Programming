#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define fastIo() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
int main()
{
    fastIo();
    ll test;
    cin>>test;
    map<pair<pair<ll,ll>,pair<ll,ll>>,ll>mp;
    while(test--)
    {
        ll n;cin>>n;
        map<ll,ll>mp;
        ll total=0;
        for(int j=0;j<n;j++){
            ll a;cin>>a;
            if(a==0 && mp.size()>0){
                auto i=mp.rbegin();
                while(i!=mp.rend() ){
                    if(i->second > 0){
                        total+=i->first;i->second--;break;
                    }
                    i++;
                }
            }
            else{
                mp[a]++;
            }
        }
        cout<<total<<endl;
    }
    return 0;
}