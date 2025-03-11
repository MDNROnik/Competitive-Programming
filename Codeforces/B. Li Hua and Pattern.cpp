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
    ll test;
    cin>>test;
    while(test--)
    {
       ll n,k;cin>>n>>k;
       vector<vector<ll>>v,vec;
       for(ll i=0;i<n;i++){
            vector<ll>t;
            for(ll j=0;j<n;j++){
                ll a;cin>>a;
                t.push_back(a);
            }
            v.push_back(t);
       }
       ll c=0;
       ll i=0,ii=n-1;
       while(i<ii){
        ll j=0,j2=n-1;
        while(j<n){
            if(v[i][j] != v[ii][j2]){
                c++;
            }
            j++,j2--;
        }
        i++;ii--;
       }
       if(n%2!=0){
        ll j=0,j2=n-1;
        while(j<j2){
            if(v[i][j] != v[ii][j2]){
                c++;
            }
            j++,j2--;
        }
       }
       if(c==k){
        cout<<"YES"<<endl;
       }
       else if(c>k){
        cout<<"NO"<<endl;
       }
       else {
        ll t=k-c;
        if(t%2==0){
            cout<<"YES"<<endl;
        }
        else {
            if(n%2 != 0){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
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


 