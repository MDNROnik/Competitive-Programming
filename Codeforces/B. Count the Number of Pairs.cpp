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
        ll n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        map<ll,ll>mp;
        for(ll i=0; i<n; i++)
        {
            //cout<<s[i]<<endl;
            mp[ s[i] ]++;
        }
        //1cout<<mp.size()<<endl;
        ll cnt=0;
        for(auto a=mp.begin(); a!=mp.end(); a++)
        {
            //cout<<a->first<<endl;
            if(a->first <=90)
            {
                if( mp[ a->first+32 ] > 0)
                {
                    if( a->second <= mp[ a->first+32 ])
                    {
                        cnt+=a->second;
                        mp[ a->first+32 ] -= a->second;
                    }
                    else
                    {
                        cnt+=mp[ a->first+32 ];
                        a->second-=mp[ a->first+32 ];
                        mp[ a->first+32 ]=0;
                        ll t=a->second;
                        t/=2;
                        if(t<=k)
                        {
                            k-=t;
                            cnt+=t;
                        }
                        else
                        {
                            cnt+=k;
                            k=0;
                        }
                    }
                }
                else
                {
                    ll t=a->second;
                    t/=2;
                    if(t<=k)
                    {
                        k-=t;
                        cnt+=t;
                    }
                    else
                    {
                        cnt+=k;
                        k=0;
                    }
                }
            }
            else
            {
                ll t=a->second;
                t/=2;
                if(t<=k)
                {
                    k-=t;
                    cnt+=t;
                }
                else
                {
                    cnt+=k;
                    k=0;
                }
            }
        }
        cout<<cnt<<endl;
    }

    return 0;
}

 