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
        ll n;cin>>n;
        map<ll,ll>mp;
        for(ll i=0;i<n;i++){
            ll a;cin>>a;
            if(a>n){
                continue;
            }
            mp[a]++;
        }
        ll ans=0;
        map<ll,ll>m;
        auto small=mp.begin();
        if(small->first==1){
            small++;
        }
        for(;small!=mp.end();small++){
            for(int i=1;;i++){
                if(small->first*i  <= n){
                    m[small->first*i]+=small->second;
                }
                else{
                    break;
                }
            }
        }
        if(m.size()==0){
            cout<<mp[1]<<endl;continue;
        }
        for(auto a=m.begin();a!=m.end();a++){
            ll node=a->second;
            //cout<<a->first<<" "<<node<<" "<<small->first<<endl;
            if(mp[1]>0 && a->first!=1){
                //cout<<a->first<<" "<<node<<" "<<small->first<<endl;
                node+=mp[1];
            }
            if(node>ans && a->first<=n ){
                ans=node;
            }
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