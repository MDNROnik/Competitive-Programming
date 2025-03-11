#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define fastIo() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
/*bool prime[90000001];
int n=90000000;
vector<ll>v;
ll temp=0;
map<ll,ll>mp;
void sieve()
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
        if(prime[i]==false){v.push_back(i);}
    }
}
*/
//Mod Of a Number
const ll m=1000000007;
ll mod(ll x)
{
    return ((x%m + m) % m);
}
//Mod Of Add
ll add(ll a,ll b)
{
    return mod( mod(a) + mod(b));
}
//Mod Of Multi
ll mul(ll a,ll b)
{
    return mod( mod(a) * mod(b));
}

//Mod Power
ll modPow(ll x, ll y)
{
    if(y==0) return 1LL;
    if(y==1) return mod(x);
    ll res=1;
    while(y)
    {
        if(y%2==1)
            res=mul(res,x);
        x=mul(x,x);
        y/=2;
    }
    return res;
}

//Power X of Y
ll Pow(ll x, ll y)
{
    if(y==0) return 1LL;
    if(y==1) return mod(x);
    ll res=1;
    while(y)
    {
        if(y%2==1)
            res*=x;
        x*=x;
        y/=2;
    }
    return res;
}
ll solve(vector<ll>&v,ll x,vector<ll>&dp){
    if(x==0){
        return 0;
    }
    else if(x<0){
        return INT_MAX;
    }
    if(dp[x]>-1){
        return dp[x];
    }
    ll mini=INT_MAX;
    for(ll i=0;i<v.size();i++){
        ll ans=solve(v,x-v[i],dp);
        if(ans!=INT_MAX){
            mini=min(ans+1,mini);
        }
    }
    dp[x]=mini;;
    return mini;
}


int main()
{
    fastIo();

    ll test;cin>>test;
    while(test--){
       ll n,q;cin>>n>>q;
       vector<ll>v;
       for(ll i=0;i<n;i++){
        ll a;cin>>a;
        //v.push_back(a);
        if(i==0){
            v.push_back(a);
        }
        else{
            v.push_back(v[i-1]+a);
        }
       }
       while(q--){
        ll l,r,k;cin>>l>>r>>k;
        ll t=r-l;t++;
        ll temp=t*k;
        ll temp2=v[n-1];
        temp2+=temp;
        if(l==1){
            temp=v[r-1];
        }
        else{
            temp=v[r-1]-v[l-2];
        }
        temp2-=temp;
        if(temp2%2!=0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
       }

    }

    return 0;
}