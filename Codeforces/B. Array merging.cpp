#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define fastIo() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
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
        ll n;
        cin>>n;
        map<ll,ll>mp,mp2;
        vector<ll>v,v2;
        ll ans=1;
        for(ll i=0; i<n; i++)
        {
            ll a;
            cin>>a;
            v.push_back(a);
        }
        for(ll i=0; i<n; i++)
        {
            ll a;
            cin>>a;
            v2.push_back(a);
        }

        ll c=0;

        ll first=0,second=0;
        ll temp=1;
        for(ll i=1; i<n; i++)
        {
            if(v[i-1]==v[i])
            {
                temp++;
                ans=max(ans,temp);
                if(mp[v[i-1]] < ans)
                {
                    mp[v[i-1]]=ans;
                }
            }
            else
            {
                //cout<<v[i-1]<<" "<<temp<<endl;
                ans=max(ans,temp);
                temp=1;
                if(mp[v[i-1]] < ans)
                {
                    mp[v[i-1]]=ans;
                }
                ans=1;
            }
        }
        if(mp[v[n-1]]==0){
            mp[v[n-1]]++;
        }


        temp=1;
        ans=1;
        for(ll i=1; i<n; i++)
        {
            if(v2[i-1]==v2[i])
            {
                temp++;
                ans=max(ans,temp);
                if(mp2[v2[i-1]] < ans)
                {
                    mp2[v2[i-1]]=ans;
                }
            }
            else
            {
                //cout<<v[i-1]<<" "<<temp<<endl;
                ans=max(ans,temp);
                temp=1;
                if(mp2[v2[i-1]] < ans)
                {
                    mp2[v2[i-1]]=ans;
                }
                ans=1;
            }
        }
        if(mp2[v2[n-1]]==0){
            mp2[v2[n-1]]++;
        }

        ans=-1;

        /*
        cout<<1111<<endl;
        for(auto a=mp.begin(); a!=mp.end(); a++)
        {
            cout<<a->first<<" "<<a->second<<endl;
        }
        cout<<endl;

        for(auto a=mp2.begin(); a!=mp2.end(); a++)
        {
            cout<<a->first<<" "<<a->second<<endl;
        }
        */





        for(auto a=mp.begin(); a!=mp.end(); a++)
        {
            ans=max(ans,a->second);
            ans=max(ans,mp2[a->first]+a->second);
        }
        for(auto a=mp2.begin(); a!=mp2.end(); a++)
        {
            ans=max(ans,a->second);
            ans=max(ans,mp[a->first]+a->second);
        }
        cout<<ans<<endl;


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