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
bool recursion(string s,vector<string>&v,vector<ll>&vec,ll index)
{
    if(index==s.size())
    {
        ll count=0;
        for(ll i=0; i<s.size(); i++)
        {
            if(s[i]=='+')
            {
                count++;
            }
            else
            {
                count--;
            }
        }
        v.push_back(s);
        vec.push_back((count));
        return 0;
    }
    if(s[index]=='?')
    {
        s[index]='+';
        recursion(s,v,vec,index+1);
        s[index]='-';
        recursion(s,v,vec,index+1);
    }
    else
    {
        recursion(s,v,vec,index+1);
    }
    return 0;
}

int main()
{
    fastIo();
    string s,s2;
    cin>>s>>s2;
    ll count=0;
    for(ll i=0; i<s.size(); i++)
    {
        if(s[i]=='+')
        {
            count++;
        }
        else
        {
            count--;
        }
    }
    ll count2=0;
    vector<string>v;
    vector<ll>vec;
    recursion(s2,v,vec,0);
    double c=0;
    for(ll i=0;i<vec.size();i++){
        if(vec[i]==count){
            c++;
        }
    }
    double ans=c;
    double a=vec.size();

    cout.precision(12);
    cout << fixed << ans / double(a) << endl;


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
 