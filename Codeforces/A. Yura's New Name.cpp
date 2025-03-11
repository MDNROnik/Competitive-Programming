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
        string s;
        cin>>s;
        string ans;
        ll count=0,o=0;
        if(s.size()==1)
        {
            if(s[0]=='^')
            {
                cout<<1<<endl;
                continue;
            }
            else
            {
                cout<<2<<endl;
                continue;
            }
        }
        for(ll i=0; i<s.size(); i++)
        {
            if(i==0)
            {
                if(s[i]=='_')
                {
                    ans.push_back('^');
                    count++;
                    ans.push_back('_');
                }
                else
                {
                    ans.push_back('^');
                }
            }
            else if(i== (s.size()-1) )
            {
                if(s[i]=='_')
                {
                    if(ans[ans.size()-1]=='_'){
                        count+=2;
                    }
                    else{
                        count++;
                    }
                }
            }
            else
            {
                if( ans[ans.size()-1]=='^' && s[i]=='_'  )
                {
                    ans.push_back('_');
                }
                else if( ans[ans.size()-1]=='^' && s[i]=='^'  )
                {

                }
                else if( ans[ans.size()-1]=='_' && s[i]=='_'  )
                {
                    ans.push_back('^');
                    ans.push_back('_');
                    count++;
                }
                else if( ans[ans.size()-1]=='_' && s[i]=='^'  )
                {
                    ans.push_back('^');
                }
            }
        }
        cout<<count<<endl;
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



 