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
        map<ll, vector<ll> >mp;
        for(ll i=1;i<=n;i++){
            ll m;cin>>m;
            for(ll j=0;j<m;j++){
                ll a;cin>>a;
                mp[i].push_back(a);
            }
        }
        vector<ll>v;
        map<ll,ll>m;
        ll count=0;
        for(auto a=mp.rbegin();a!=mp.rend();a++){
            vector<ll>vec;
            vec=a->second;
            ll c=0;
            for(ll i=0;i<vec.size();i++){
                if( m[ vec[i] ] == 0 ){
                    m[ vec[i] ]++;
                    if(c==0){
                        v.push_back(vec[i]);c++;
                    }
                }
                m[ vec[i] ]++;
            }
            if(c==0){
                count++;break;
            }
        }
        if(count==0){
            reverse(v.begin(),v.end());
            for(ll i=0;i<v.size();i++){
                cout<<v[i]<<" ";
            }
            cout<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
    return 0;
}
ll combination(ll num){
    return (num*(num-1))/2;
}
ll setbit(ll num){
    ll c=0,shift=1;
    while(num!=0){
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


 