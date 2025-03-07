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


int main()
{
    fastIo();
    ll test;
    cin>>test;
    map< pair< pair<ll,ll>,ll   >  ,pair<ll,string>>mp;
    while(test--)
    {
        ll n,k,x;cin>>n>>k>>x;

        if(mp[ {{n,k},x} ].first==1){
            cout<<mp[ {{n,k},x} ].second<<endl;
            continue;
        }


        ll nsum=((n*(n+1))/2);

        ll last=((k*(k+1))/2);
        if(nsum<x){
            mp[ {{n,k},x} ]={1,"NO"};
            cout<<"NO"<<endl;
        }
        else if(x<last){
            mp[ {{n,k},x} ]={1,"NO"};
            cout<<"NO"<<endl;
        }
        else{
            ll yes=0;
            ll tempn=n,tempk=k,tempx=x;
            for(ll i=1;i<=k;i++){
                if( (x-n) <=(k-i) ){
                    yes++;break;
                }
                x-=n;n--;
            }
            if(yes==1){
                mp[ {{tempn,tempk},tempx} ]={1,"YES"};
                cout<<"YES"<<endl;
            }
            else{
                mp[ {{tempn,tempk},tempx} ]={1,"NO"};
                cout<<"NO"<<endl;
            }
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