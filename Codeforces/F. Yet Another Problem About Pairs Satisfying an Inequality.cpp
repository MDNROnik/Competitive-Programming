#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll test;
    cin>>test;
    while(test--)
    {
        ll n;cin>>n;
        vector<ll>v,v2;
        v.push_back(0);
        v2.push_back(0);
        for(ll i=1;i<=n;i++){
            ll a;cin>>a;
            v2.push_back(a);
            if(a<i){
                v.push_back(1);
            }
            else{
                v.push_back(0);
            }
        }
        //cout<<v[0]<<" ";
        for(ll i=2;i<=n;i++){
            v[i]+=v[i-1];
            //cout<<v[i]<<" ";
        }
        //cout<<endl;

        ll cnt=0;
        for(ll i=1;i<=n;i++){
            if( v2[i] < i && v2[i]>0){
                //cout<<v2[i]<<endl;
                ll t=v[ v2[i]-1 ];cnt+=t;
            }
        }
        cout<<cnt<<endl;
    }
    return 0;
}