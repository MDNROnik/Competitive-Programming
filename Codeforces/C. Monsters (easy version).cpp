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
        vector<ll>v;
        map<ll,ll>mp;
        for(ll i=0;i<n;i++){
            ll a;cin>>a;
            mp[a]++;
        }
        ll in=1;
        for(auto it=mp.begin();it!=mp.end();it++){
            for(ll i=0;i<it->second;i++){
                v.push_back(it->first);
            }
        }
        ll count=0;
        for(ll i=0;i<v.size();i++){
            //cout<<v[i]<<" "<<in<<endl;
            if(v[i]==in){
                in++;
            }
            else if(v[i]>in){
                ll temp=v[i]-in;
                count+=temp;
                in++;
            }
        }
        cout<<count<<endl;
    }
	return 0;
}