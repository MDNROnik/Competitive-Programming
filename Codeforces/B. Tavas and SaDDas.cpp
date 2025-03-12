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
vector<ll>v;
solve(ll n,ll temp)
{
    //cout<<n<<" "<<temp<<endl;
    if(temp>n)
    {
        return 0;
    }
    else if(temp==n)
    {
        return 0;
    }
    temp*=10;
    temp+=4;
    v.push_back(temp);
    solve(n,temp);
    temp-=4;
    temp+=7;
    solve(n,temp);
    v.push_back(temp);
    return 0;
}

int main()
{
    fastIo();
    ll n,temp=0;
    scanf("%lld",&n);
    solve(n,temp);
    sort(v.begin(),v.end());
    for(ll i=0; i<v.size(); i++)
    {
        //printf("%lld\n",v[i]);
        if(n==v[i])
        {
            printf("%lld\n",i+1);
            break;
        }
    }
    return 0;
}