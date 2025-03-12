#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define fastIo() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
//bool prime[90000001];
//int n=90000000;
//vector<int>v;
//ll temp=0;
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
        if(prime[i]==false)v.push_back(i);
    }
}*/
//Mod Of a Number
const ll m=998244353;
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

//Mod Power
ll modPow(ll x, ll y){
    if(y==0) return 1LL;
    if(y==1) return mod(x);
    ll res=1;
    while(y){
        if(y%2==1)
            res=mul(res,x);
        x=mul(x,x);
        y/=2;
    }
    return res;
}

//Power X of Y
ll Pow(ll x, ll y){
    if(y==0) return 1LL;
    if(y==1) return mod(x);
    ll res=1;
    while(y){
        if(y%2==1)
            res*=x;
        x*=x;
        y/=2;
    }
    return res;
}


int main()
{
    fastIo();
    ll test;cin>>test;
    while(test--){
        ll n,k,d,w;cin>>n>>k>>d>>w;
        vector<ll>v;
        for(ll i=0;i<n;i++){
            ll a;cin>>a;
            v.push_back(a);
        }
        ll count=0,ne=0,j=0,mo=0,temp=0;
        for(ll i=0;i<n;){
            if(ne==0){
                temp=v[i]+w;
                temp+=d;
                ne=1;count++;
            }
            if(v[i]<=temp && j<k){
                //cout<<j<<endl;
                i++;j++;
                //cout<<j<<endl;
            }
            else{
                //cout<<v[i]<<" "<<temp<<endl;
                //cout<<count<<endl;
                ne=0;j=0;
            }
            //cout<<i<<endl;
        }
        //if(j<k || mo<d){count++;}
        cout<<count<<endl;
    }
    return 0;
}
