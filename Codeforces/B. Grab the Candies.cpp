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
       ll n;cin>>n;
       vector<ll>e,o;
       ll even=0,odd=0;
       for(ll i=0;i<n;i++){
        ll a;cin>>a;
        if(a%2==0){
            even+=a;
        }
        else{
            o.push_back(a);
        }
       }
       sort(o.begin(),o.end());
       ll c=0;
       for(ll i=0;i<o.size();i++){
        odd+=o[i];
        //cout<<odd<<" "<<even<<endl;
        if(odd>=even){
            c++;break;
        }
       }
       if(c==0){
        cout<<"YES"<<endl;
       }
       else{
        cout<<"NO"<<endl;
       }
    }

    return 0;
}