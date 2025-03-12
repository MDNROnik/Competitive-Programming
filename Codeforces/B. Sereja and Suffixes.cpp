#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define fastIo() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)

int main()
{
    fastIo();
    ll n,m;cin>>n>>m;
    vector<ll>v;
    for(int i=0;i<n;i++){
        ll a;cin>>a;
        v.push_back(a);
    }
    map<ll,ll>mp;
    vector<ll>vec(n+7,0);
    for(int i=v.size()-1;i>=0;i--){
        mp[v[i]]++;
        vec[i+1]=mp.size();
    }
    while(m--){
        ll a;cin>>a;
        cout<<vec[a]<<endl;
    }

    return 0;
}
 