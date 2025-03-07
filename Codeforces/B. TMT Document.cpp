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
bool solve(string s)
{
	int m=0,t=0;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]=='M')
			m++;
		else
				t++;
		if(m>t)
			return false;
	}
	return true;
}

int main()
{
    fastIo();
    ll test;
    cin>>test;
    while(test--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int M=0,T=0;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='T')T++;
            else M++;
        }
        if(2*M != T)cout<<"NO"<<endl;
        else
        {
            if(solve(s)==true)
            {
                reverse(s.begin(),s.end());
                if(solve(s)==true)
                    cout<<"YES"<<endl;
                else
                    cout<<"NO"<<endl;
            }
            else
                cout<<"NO"<<endl;
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