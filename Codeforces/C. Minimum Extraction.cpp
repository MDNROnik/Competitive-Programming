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
int main()
{
    fastIo();
    ll test;
    cin>>test;
    while(test--)
    {
        ll n;
        cin>>n;
        vector<ll>v;
        for(ll i=0; i<n; i++)
        {
            ll a;
            cin>>a;
            v.push_back((a));
        }
        if(n==1)
        {
            cout<<v[0]<<endl;
            continue;
        }
        sort(v.begin(),v.end());
        ll ans=-1000000000;
        if(v[0]<0)
        {
            if(v[0]>ans)
            {
                ans=v[0];
            }
            for(ll i=1; i<n; i++)
            {
                v[i]-=(v[0]);
            }
            ll extra=0;
            sort(v.begin(),v.end());
            for(ll i=1; i<n; i++)
            {
                v[i]-=extra;
                if(v[i]>ans)
                {
                    ans=v[i];
                }
                extra+=v[i];
            }
            cout<<ans<<endl;
            continue;
        }
        ll extra=0;
        sort(v.begin(),v.end());
        for(ll i=0; i<n; i++)
        {
            v[i]-=extra;
            if(v[i]>ans)
            {
                ans=v[i];
            }
            extra+=v[i];
        }
        cout<<ans<<endl;
    }

    return 0;
}
 