#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define fastIo() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
//bool prime[1000001];
//ll n=1000000;
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
    sieve();
    ll test;
    cin>>test;
    while(test--)
    {
       ll n,m;cin>>n>>m;
       ll x1,y1,x2,y2;cin>>x1>>y1>>x2>>y2;
       if( (x1==1 && y1==1) || (x1==n && y1==m) || (x1==1 && y1==m) || (x1==n && y1==1)  ) {
        cout<<2<<endl;
       }
       else if( (x2==1 && y2==1) || (x2==n && y2==m) || (x2==1 && y2==m) || (x2==n && y2==1)  ) {
        cout<<2<<endl;
       }
       else if ( (y1==1) || (y2==1) || (y1==m) || (y2==m) ){
        cout<<3<<endl;
       }
       else if (  (x1==1) || (x2==1) || (x1==n) || (x2==n) ){
        cout<<3<<endl;
       }
       else{
        cout<<4<<endl;
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

void sieve()
{
    /*for(ll i=2; i*i<=n; i++)
    {
        if(prime[i]==false)
        {
            for(ll j=i*i; j<=n; j+=i)
            {
                prime[j]=true;
            }
        }
    }
    for(int i=2; i<=n; i++)
    {
        if(prime[i]==false){v.push_back(i);}
    }
    */
}


 