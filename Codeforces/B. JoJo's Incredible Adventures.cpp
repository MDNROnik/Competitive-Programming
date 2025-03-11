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
        string s;
        cin>>s;
        ll t=0;
        ll rec=0;
        for(ll i=0; i<s.size(); i++)
        {
            if(s[i]=='1')
            {
                t++;
            }
            else
            {
                if(rec<t)
                {
                    rec=t;
                }
                t=0;
            }
        }
        if(rec<t)
        {
            rec=t;
        }
        if(rec==s.size()){
            cout<<rec*rec<<endl;continue;
        }
        t=0;ll t2=0;
        ll i=0,j=s.size()-1;
        while(s[i]=='1'){
            t++;i++;
        }
        while(s[j]=='1'){
            t++;j--;
        }
        if(rec<t){
            rec=t;
        }
        ll ans=0;
        if(rec==1){
            cout<<1<<endl;continue;
        }
        ll mul=2;
        for(ll i=rec-1;i>=1;i--){
            t=i*mul;
            if(t>ans){
                ans=t;
            }
            mul++;
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

 