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
        ll n,w,h;
        cin>>n>>w>>h;
        vector<ll>cake,dis;
        for(ll i=0; i<n; i++)
        {
            ll a;
            cin>>a;
            cake.push_back(a);
        }
        for(ll i=0; i<n; i++)
        {
            ll a;
            cin>>a;
            dis.push_back(a);

        }
        ll stay=0,left=0,right=0;
        for(ll i=0; i<n; i++)
        {
            ll t=cake[i],t2=cake[i],t3=dis[i],t4=dis[i];
            t-=w;
            t2+=w;
            t3-=h;
            t4+=h;
            if(t<=t3 && t2>=t4)
            {
                stay++;
            }
            else
            {
                stay=0;
            }

            if(t>t3 )
            {
                left=1;
            }
            if(t4>t2)
            {
                right=1;
            }
        }
        if(stay==n)
        {
            cout<<"YES"<<endl;
            continue;
        }
        if(left==1 && right==1)
        {
            cout<<"NO"<<endl;
            continue;
        }
        ll maxx=0;

        //cout<<left<<" "<<right<<endl;
        if(left==1)
        {
            ll count=0;
            for(ll i=0; i<n; i++)
            {
                ll t=cake[i],t2=cake[i],t3=dis[i],t4=dis[i];
                t-=w;
                t2+=w;
                t3-=h;
                t4+=h;
                if(t>t3)
                {
                    ll temp=abs(t-t3);
                    maxx=max(temp,maxx);
                }
            }
            for(ll i=0; i<n; i++)
            {
                ll t=cake[i],t2=cake[i],t3=dis[i],t4=dis[i];
                t-=w;
                t2+=w;
                t3-=h;
                t4+=h;

                t-=maxx;
                    t2-=maxx;
                if(t<=t3 && t2>=t4)
                {

                }
                else
                {
                    count++;
                    break;
                }
            }
            if(count==0)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
        else if(right==1){
            ll count=0;
            for(ll i=0; i<n; i++)
            {
                ll t=cake[i],t2=cake[i],t3=dis[i],t4=dis[i];
                t-=w;
                t2+=w;
                t3-=h;
                t4+=h;
                if(t2<t4)
                {
                    ll temp=abs(t2-t4);
                    maxx=max(temp,maxx);
                }
            }
            for(ll i=0; i<n; i++)
            {
                ll t=cake[i],t2=cake[i],t3=dis[i],t4=dis[i];
                t-=w;
                t2+=w;
                t3-=h;
                t4+=h;

                t+=maxx;
                t2+=maxx;
                if(t<=t3 && t2>=t4)
                {

                }
                else
                {
                    count++;
                    break;
                }
            }
            if(count==0)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }

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
 