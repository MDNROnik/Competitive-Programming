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
        ll n;
        cin>>n;
        ll c,d;
        cin>>c>>d;
        map<ll,ll>mp;
        vector<ll>v;
        for(ll i=0; i<n; i++)
        {
            ll a;
            cin>>a;
            mp[a]++;
        }
        ll cost=0;
        if(mp[1]==0)
        {
            cost+=d;
            mp[1]=1;
            n++;
        }
        ll i=1;
        for(auto a=mp.begin(); a!=mp.end();)
        {
            //00cout<<i<<endl;
            if(i==a->first)
            {
                if(a->second > 0)
                {
                    if(a->second==1)
                    {
                        n--;
                    }
                    else
                    {
                        ll t=a->second;n-=t;
                        t--;
                        cost+=(c*t);
                    }
                }
                //cout<<n<<endl;
                if(cost+(n*c) >0){
                    //cout<<n<<endl;
                    v.push_back(cost + (n*c) );
                }
                a++;i++;
                //cout<<cost<<" "<<i<<endl;
            }
            else{
                ll t=abs(i-a->first);
                t*=d;
                ll t2=c*n;
                if(t<t2){
                    cost+=t;
                    i=a->first;
                }
                else{
                    cost+=t2;break;
                }
            }
        }
        if(v.size()==0){
            cout<<cost<<endl;continue;
        }
        //cout<<cost<<endl;
        sort(v.begin(),v.end());
        cost=min(cost,v[0]);
        cout<<cost<<endl;
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


 