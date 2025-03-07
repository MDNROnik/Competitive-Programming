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

ll fun(ll ind, ll total, ll cost, vector<pair<ll,ll>>&v, vector<vector<ll>> dp,ll &c){
    //cout<<ind<<" "<<total<<" "<<cost<<endl;
    if(total<0){
        return cost;
    }
    if(total==0){
        c=min(c,cost);
        return cost;
    }
    else if(ind==v.size()){
        return INT_MAX;
    }

    if(dp[ind][total]!=-1){
        return dp[ind][total];
    }

    ll notpick=0;
    notpick=fun(ind+1,total,cost,v,dp,c);

    ll pick=0;
    ll co=v[ind].first,t=v[ind].second;

    if(total<=t){
        t=total;
    }
    pick=co*t;
    pick=fun(ind+1,total-t,cost+pick,v,dp,c);

    //cout<<ind<<" "<<total<<" "<<cost<<endl;
    //cout<<ind<<" "<<total-t<<" "<<cost+pick<<endl;
    //cout<<notpick<<" "<<pick<<endl<<endl;;


    c  =  min(c,  min(pick,notpick)  );


    if(notpick==pick && pick==INT_MAX){
        return INT_MAX;
    }

    return dp[ind][total]=min(notpick,pick);



}


int main()
{
    fastIo();
    ll test;
    cin>>test;
    while(test--)
    {
        ll n,m,k=0;
        cin>>n>>m;
        vector<pair<ll,ll>>v;
        for(ll i=0; i<n; i++)
        {
            ll a;
            cin>>a;
            v.push_back({0,a});
        }
        for(ll i=0; i<n; i++)
        {
            ll a;
            cin>>a;
            v[i].first=min(a,m);
        }
        sort(v.begin(),v.end());
        ll cost=m;
        ll remain=n-1;

        for(ll i=0;i<n-1;i++){
            ll count=min(v[i].second,remain);
            remain-=count;
            cost+=(count*v[i].first);
        }
        cout<<cost<<endl;


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