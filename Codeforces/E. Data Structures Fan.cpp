#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastIo() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
//bool prime[9000001];
////int n=9000000;
//map<ll,bool>mp;
//vector<ll>v;
//priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
//void sieve();
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
    //sieve();
    fastIo();
    ll test;cin>>test;
    while(test--){
        ll n;cin>>n;
        vector<ll>v;
        vector<ll>pre;pre.push_back(0);
        for(ll i=0;i<n;i++){
            ll a;cin>>a;
            v.push_back(a);
            pre.push_back(pre[pre.size()-1]^a);
        }
        string s;cin>>s;
        ll xor0=0,xor1=0;
        for(ll i=0;i<s.size();i++){
            if(s[i]=='0'){
                xor0^=v[i];
            }
            else{
                xor1^=v[i];
            }
        }
        ll que;cin>>que;
        while(que--){
            ll type;cin>>type;
            if(type==1){
                ll l,r;cin>>l>>r;
                ll range=pre[r]^pre[l-1];
                xor0^=range;
                xor1^=range;
            }
            else{
                ll xo;cin>>xo;
                if(xo==1){
                    cout<<xor1<<" ";
                }
                else{
                    cout<<xor0<<" ";
                }
            }
        }
        cout<<endl;

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


/*void sieve()
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
            //v.push_back(i);
            mp[i]=1;
        }
    }
}*/
 