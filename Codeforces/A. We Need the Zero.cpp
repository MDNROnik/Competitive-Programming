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
    while(test--){
        ll n;cin>>n;
        vector<ll>v;
        for(ll i=0;i<n;i++){
            ll a;cin>>a;
            v.push_back(a);
        }
        ll c=-1;
        for(ll i=0;i<256;i++){
            vector<ll>vec;
            c=-1;
            for(ll j=0;j<n;j++){
                //cout<<(v[j]^i)<<endl;
                vec.push_back( v[j]^i  );
            }
            for(ll j=1;j<n;j++){
                vec[j]^=vec[j-1];
            }
            if(vec[n-1]==0){
                c=i;break;
            }
        }
        if(c==-1){
            cout<<-1<<endl;
        }
        else{
            cout<<c<<endl;
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


 