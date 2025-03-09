#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastIo() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
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
    ll n,m;cin>>n>>m ;
    vector<ll>v;
    v.push_back(0);
    for(int i=0;i<n;i++){
        ll a;cin>>a;
        v.push_back(a);
    }
    for(int i=1;i<=n;i++){
        v[i] =(v[i]+v[i-1]);

    }
    ll ans=0;
    for(int i=1;i<=n;i++){
        ll temp=m;
        //cout<<v[i]<<" start "<<endl;
        if(v[i]-v[i-1]<temp){
            ll low=i,high=n;
            while(abs(low-high) > 1){
                //cout<<low<<" "<<high<<endl;
                ll mid=high+low;
                mid/=2;
                //cout<<v[mid]<<endl;
                if(v[mid]-v[i-1]==temp){
                    ans=max(ans ,mid-i+1);break;
                }
                else if(v[mid]-v[i-1] > temp){
                    high=mid;
                }
                else if(v[mid]-v[i-1]<temp){
                    low=mid;
                }
                //cout<<low<<" "<<high<<endl<<endl;
            }
            if(abs(low-high)  <=1){
                //cout<<"enter"<<endl;
                if(v[high]-v[i-1] <= temp){
                    ans=max(ans ,high-i+1);
                }
                if(v[low]-v[i-1] <= temp){
                    ans=max(ans ,low-i+1);
                }
            }
        }
    }
    cout<<ans<<endl;




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