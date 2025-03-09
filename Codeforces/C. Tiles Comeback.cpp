#include<bits/stdc++.h>
using namespace std;
#define ll int
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
    ll test;cin>>test;
    while(test--){

        ll n,k;cin>>n>>k;
        map<ll,vector<ll>>mp;
        vector<ll>vec;
        for(int i=0;i<n;i++){
            ll a;cin>>a;vec.push_back(a);
            mp[a].push_back(i+1);
        }
        if(vec[0]==vec[vec.size()-1] && mp[vec[0]].size()>=k){
            cout<<"YES"<<endl;continue;
        }
        //ll first=mp.begin()->first;
        ll f=0,index=-1;
        for(int i=0;i<mp[vec[0]].size();i++){
            if(i+1==k){
                f++;index=mp[vec[0]][i];break;
            }
        }
        if(f==0){
            cout<<"NO"<<endl;continue;
        }
        if(index==n && index==k){
            cout<<"YES"<<endl;continue;
        }
        //cout<<index<<endl;

        vector<ll>v=mp[vec[vec.size()-1]];
        //reverse(v.begin(),v.end());

        for(int i=0;i<v.size();i++){
            //cout<<v[i]<<endl;
            ll t=v.size()-(i+1);t++;
            if(index<v[i] && t==k){
                f++;break;
            }
        }




        if(f==1){
            cout<<"NO"<<endl;continue;
        }
        else{
            cout<<"YES"<<endl;
        }

    }
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