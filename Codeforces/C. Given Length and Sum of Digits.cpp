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
        ll n,m;
    cin>>n>>m;
    ll step=n,remain=m,s=0;
    string big;
    if(n==1 && m==0){
        cout<<0<<" "<<0<<endl;return 0;
    }
    while(step>0 && remain>0)
    {
        if(remain>=9)
        {
            remain-=9;
            big.push_back(9+'0');
        }
        else
        {
            big.push_back(remain+'0');
            remain-=remain;
        }
        s=1;
        step--;
    }
    while(step>0 && s==1)
    {
        big.push_back(0+'0');
        step--;
    }
    //cout<<big<<endl;

    if(remain==0 && step==0)
    {
        if(big[big.size()-1]=='0')
        {
            cout<<1;
            ll done=0;
            for(int i=big.size()-2; i>=0; i--)
            {
                if(done==0 && big[i]!='0')
                {
                    ll temp=big[i]-'0';
                    temp--;
                    cout<<temp;
                    done++;
                }
                else
                {
                    cout<<big[i];
                }
            }
            cout<<" ";
        }
        else{
            reverse(big.begin(),big.end());
            cout<<big<<" ";
            reverse(big.begin(),big.end());
        }


        cout<<big<<endl;
    }
    else
    {
        cout<<-1<<" "<<-1<<endl;
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