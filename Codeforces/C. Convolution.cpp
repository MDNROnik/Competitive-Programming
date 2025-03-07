#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve()
{
   ll n,m;cin>>n>>m;
   ll sum1=0,sum2=0;
   for(int i=0;i<n;i++){
    ll a;cin>>a;sum1+=a;
    //cout<<sum1<<endl;
   }
   for(int i=0;i<m;i++){
    ll a;cin>>a;sum2+=a;
   }
   //cout<<sum1<<" "<<sum2<<endl;
   cout<<sum1*sum2<<endl;
}

signed main()
{
    int t;
    t=1;
    while(t--)
    {
        solve();
    }
}