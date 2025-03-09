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
        ll n,k;cin>>n>>k;
        string s;cin>>s;
        s='0'+s;
        vector<ll>prefixone(n+1);
        for(int i=1;i<=n;i++){
            prefixone[i]=prefixone[i-1]+(s[i]-'0');
        }
        ll one,zero;
        vector<ll> preone(n+2),prezero(n+2);
        vector<ll> postone(n+2),postzero(n+2);
        one=-1,zero=-1;
        vector<ll>prone;
        for(int i=1;i<=n;i++){
            //cout<<i<<endl;
            preone[i]=(one);prezero[i]=(zero);
            if(s[i]=='1'){
                one=i;
            }
            else{
                zero=i;
            }
        }
        one=-1,zero=-1;
        for(int i=n;i>0;i--){
            postone[i]=(one);postzero[i]=(zero);
            if(s[i]=='1'){
                one=i;
            }
            else{
                zero=i;
            }
        }
        set<pair<int,int>> res;
        while(k--){
            ll i,j;cin>>i>>j;
            one=0;
            one=prefixone[j]-prefixone[i-1];
            if(prefixone[j]-prefixone[j-one]==one){
                res.insert({-1,-1});
            }
            else if(one==0 || one==j-i+1){
                res.insert({-1,-1});
            }
            else{
                //cout<<i<<" "<<j<<endl;
                int ni,nr;
                //cout<<preone[i]<<endl;
                if(preone[i]==-1){
                    ni=1;//cout<<1111<<endl;
                }
                else{
                    ni=preone[i]+1;
                }

                if(postzero[j]==-1){
                    nr=n;
                }
                else{
                    nr=postzero[j]-1;
                }
                //cout<<ni<<" "<<nr<<endl;
                res.insert({ni,nr});
            }
        }
        cout<<res.size()<<endl;

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