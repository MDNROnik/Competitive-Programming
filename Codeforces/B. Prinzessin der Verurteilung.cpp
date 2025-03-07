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
ll isSubstring(string s1, string s2);

/*ll rec(ll n,ll now,map<pair<ll,ll>,ll>&mp){
    if(n==0){
        return 1;
    }
    if(n>0){
        return 0;
    }
    ll notpick;
    ll after=now;
    after*=10;
    after+=1;
    notpick=rec(n,after,mp);
    if(notpick==1){
        return 1;
    }
    ll pick;
    pick=rec((n-now),after,mp);
    if(pick==1){
        return 1;
    }
    else{
        return 0;
    }
}*/
void num_to_str(ll num,string &ss)
{
    if(num)
    {
        num_to_str((num-1)/26,ss);
        ss+=('a'+ (num-1)%26);
    }
}

int main()
{
    fastIo();
    ll test;
    cin>>test;
    while(test--)
    {
        ll n;cin>>n;
        string s;cin>>s;
        string ss="";
        ll i=1;
        while(1){
            ss="";
            num_to_str(i,ss);
           int pos=s.find(ss);
           if(pos==-1)
           {
               ss;
               break;
           }
           i++;
        }
        cout<<ss<<endl;
    }
}
ll isSubstring(string s1, string s2)
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