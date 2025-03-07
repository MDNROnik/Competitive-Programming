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
        ll n,k;
        cin>>n>>k;

        ll even=2,odd=1,flag=0;
        for(ll i=1; i<=n; i++)
        {
            for(ll j=1; j<=k; j++)
            {
                if(i%2==0)
                {
                    if(even>n*k){
                        flag=1;break;
                    }
                    //cout<<even<<" ";
                    even+=2;
                }
                else
                {
                    if(odd>n*k){
                        flag=1;break;
                    }
                    //cout<<odd<<" ";
                    odd+=2;
                }
            }
            if(flag==1){
                break;
            }
            //cout<<endl;
        }
        if(flag){
            cout<<"NO"<<endl;continue;
        }
        cout<<"YES"<<endl;
        even=2,odd=1;
        for(ll i=1; i<=n; i++)
        {
            for(ll j=1; j<=k; j++)
            {
                if(i%2==0)
                {
                    cout<<even<<" ";
                    even+=2;
                }
                else
                {
                    cout<<odd<<" ";
                    odd+=2;
                }
            }
            cout<<endl;
        }
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