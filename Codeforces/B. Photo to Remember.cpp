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
    ll n;cin>>n;
    vector<ll>w,h,th;
    ll maxx=-1,maxx2=-1,sum=0;
    for(ll i=0;i<n;i++){
        ll a,b;cin>>a>>b;sum+=a;
        w.push_back(a),h.push_back(b);
        th.push_back(b);
    }
    sort(th.begin(),th.end());

    for(ll i=0;i<n;i++){
        ll t=0;
        if(i==0){
            t=sum-w[i];
            if(th[n-1]==h[i]){
                t*=th[n-2];
            }
            else{
                t*=th[n-1];
            }
        }
        else{
            t=sum-w[i];
            if(th[n-1]==h[i]){
                t*=th[n-2];
            }
            else{
                t*=th[n-1];
            }
        }
        cout<<t<<" ";
    }


    return 0;
}

 