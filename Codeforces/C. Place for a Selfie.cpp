#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define fastIo() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
bool prime[100000001];
ll n=100000000;
void sieve();
ll mod(ll x);
ll add(ll a,ll b);
ll mul(ll a,ll b);
ll modPow(ll x, ll y);
ll Pow(ll x, ll y);
ll setbit(ll num);
ll combination(ll num);

int main()
{
    fastIo();
    ll test;
    cin>>test;
    while(test--)
    {
        ll n,m;
        cin>>n>>m;
        vector<ll>v;
        for(ll i=0; i<n; i++)
        {
            ll a;
            cin>>a;
            v.push_back(a);
        }
        sort(v.begin(),v.end());
        for(ll i=0; i<m; i++)
        {
            ll a1,b,c;
            cin>>a1>>b>>c;
            ll count=-1;
            auto a=lower_bound(v.begin(),v.end(),b);
            if(a==v.end())
            {
                a--;
                ll x=*a;
                x=(b-x)*(b-x);
                x-=(4LL*a1*c);
                if(x<0)
                {
                    cout<<"YES"<<endl;
                    cout<<(*a)<<endl;
                }
                else
                {
                    cout<<"NO"<<endl;
                }
            }
            else
            {
                ll x=*a;
                x=(b-x)*(b-x);
                x-=(4LL*a1*c);
                if(x<0)
                {
                    cout<<"YES"<<endl;
                    cout<<(*a)<<endl;
                }
                else
                {
                    if(a==v.begin())
                    {
                        cout<<"NO"<<endl;
                    }
                    else
                    {
                        a--;
                        ll x=*a;
                        x=(b-x)*(b-x);
                        x-=(4LL*a1*c);
                        if(x<0)
                        {
                            cout<<"YES"<<endl;
                            cout<<(*a)<<endl;
                        }
                        else
                        {
                            cout<<"NO"<<endl;
                        }
                    }
                }
            }
        }
        cout<<endl;
    }

    return 0;
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
void sieve()
{
    for(ll i=2; i*i<=n; i++)
    {
        if(prime[i]==false)
        {
            for(ll j=i*i; j<=n; j+=i)
            {
                prime[j]=true;
            }
        }
    }
    /*for(int i=2; i<=n; i++)
    {
        if(prime[i]==false){v.push_back(i);}
    }*/
}


 