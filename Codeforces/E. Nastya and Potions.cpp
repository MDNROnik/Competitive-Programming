#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastIo() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
void sieve();
ll mod(ll x);
ll add(ll a,ll b);
ll mul(ll a,ll b);
ll modPow(ll x, ll y);
ll Pow(ll x, ll y);
ll setbit(ll num);
ll combination(ll num);

void dfs(int n,map<ll,vector<ll>>&mp,vector<ll>&visited,vector<ll>&v) {
    visited[n] = true;
    ll sum=0,c=0;
    for (int u : mp[n]) {
        c++;
        if (!visited[u])
            dfs(u,mp,visited,v);
        sum+=v[u];
    }
    if(sum<v[n] && c>0 && v[n]>0){

        v[n]=sum;
    }
}

int main()
{
    fastIo();
    ll test;cin>>test;
    while(test--){
        ll n,k;cin>>n>>k;
        vector<ll>v;
        for(int i=0;i<n;i++){
            ll a;cin>>a;
            v.push_back(a);
        }
        for(int i=0;i<k;i++){
            ll a;cin>>a;
            v[a-1]=0;
        }

        map<ll,vector<ll>>mp;
        for(int i=0;i<n;i++){
            ll m;cin>>m;
            while(m--){
                ll a;cin>>a;
                a--;
                mp[i].push_back(a);
            }
        }
        vector<ll>visited(n+1,0);
        for(int i=0;i<n;i++){
            dfs(i,mp,visited,v);
        }
        for(int i=0;i<n;i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
}
ll combination(ll num)
{
    return (num*(num-1))/2;
}
ll setbit(ll num)
{
    ll c=0,shift=1;
    while(num!=0)
    {
        c++;
        num>>=shift;
    }
    return c;
}

//Mod Power
ll modPow(ll x, ll y)
{
    if(y==0)
        return 1LL;
    if(y==1)
        return mod(x);
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
    if(y==0)
        return 1LL;
    if(y==1)
        return mod(x);
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

//Seive
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
}*/