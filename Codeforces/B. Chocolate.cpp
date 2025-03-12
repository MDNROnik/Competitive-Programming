#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define fastIo() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
//bool prime[90000001];
//int n=90000000;
//vector<int>v;
//ll temp=0;
/*void sieve()
{
    for(int i=2; i*i<=n; i++)
    {
        if(prime[i]==false)
        {
            for(int j=i*i; j<=n; j+=i)
            {
                prime[j]=true;
            }
        }
    }
    for(int i=2; i<=n; i++)
    {
        if(prime[i]==false)v.push_back(i);
    }
}*/
const ll m=1e9+7;
ll mod(ll x){
    return ((x%m + m) % m);
}
ll add(ll a,ll b){
    return mod( mod(a) + mod(b));
}
ll mul(ll a,ll b){
    return mod( mod(a) * mod(b));
}


int main()
{
    fastIo();
    ll n;cin>>n;
    vector<ll>v;
    vector<ll>vec;
    for(int i=0;i<n;i++){
        ll a;cin>>a;
        v.push_back(a);
    }
    ll one=0,zero=1,ans=1;
    ll z=0;
    for(int i=0;i<n;i++){
        if(v[i]==1){
            one++;z++;
        }
        if(one==1 && v[i]==0){
            zero++;
        }
        if(one==2){
            ans*=zero;
            zero=1;one=1;
        }
    }
    if(z==0){
        cout<<0<<endl;return 0;
    }
    cout<<ans<<endl;


    return 0;
}