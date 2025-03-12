#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,m;cin>>n>>m;
        vector<ll>v;
        vector<ll>vec;
        for(ll i=0;i<m;i++){
            ll a;cin>>a;
            vec.push_back(a);
        }
        map<ll,ll>mp;
        map<ll,ll>ans;
        map<ll,ll>::iterator a;
        ll temp=n;
        for(ll i=0;i<m;i++){
            ll a=vec[i];
            mp[a]++;
            if(mp[a]==1){
                ans[temp]=i+1;temp--;
            }
        }
        if(temp>=0){
            for(int i=1;i<=temp;i++){
                ans[i]=-1;
            }
        }
        for(ll i=1;i<=n;i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
}
 