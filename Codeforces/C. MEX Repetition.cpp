#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastIo() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
//bool prime[9000001];
//int n=9000000;
//vector<ll>v;
//priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
void sieve();
ll mod(ll x);
ll add(ll a,ll b);
ll mul(ll a,ll b);
ll modPow(ll x, ll y);
ll Pow(ll x, ll y);
ll setbit(ll num);
ll combination(ll num);
int isSubstring(string s1, string s2);


int main()
{
    fastIo();
    ll test;cin>>test;
    while(test--){
        ll n,k;cin>>n>>k;
        vector<ll>v;
        map<ll,ll>mp;
        for(ll i=0;i<n;i++){
            ll a;cin>>a;
            v.push_back(a);
            mp[a]=1;
        }
        ll low=-1;
        for(ll i=0;i<=n;i++){
            if(mp[i]==0){
                low=i;break;
            }
        }
        if(n==1){
            v.push_back(low);
            //cout<<"ANS ";
            if(k%2==0){
                cout<<v[0]<<endl;
            }
            else{
                cout<<v[1]<<endl;
            }
            continue;
        }
        if(k<=n+1){
            ll i=(n+1)-k;
            v.push_back(low);
            while(i<v.size() && n>0){
                cout<<v[i]<<" ";
                i++;n--;
            }
            i=0;
            while(n--){
                cout<<v[i]<<" ";i++;
            }
            cout<<endl;
        }
        else{
            v.push_back(low);
            //cout<<v.size()<<endl;
            ll j=k%v.size();
            ll i=v.size();
            while(j--){
                i--;
            }
            //cout<<i<<endl;

            while(i<v.size() && n>0){
                cout<<v[i]<<" ";
                i++;n--;
            }
            i=0;
            while(n--){
                cout<<v[i]<<" ";i++;
            }
            cout<<endl;
        }


    }







}
int isSubstring(string s1, string s2)
{
    if (s2.find(s1) != string::npos)
        return s2.find(s1);
    return -1;
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
/*
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
        if(prime[i]==false)
        {
            v.push_back(i);
        }
    }
}
*/