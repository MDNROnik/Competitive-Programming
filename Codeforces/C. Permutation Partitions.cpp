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
//const ll m=1e9+7;
const ll m=998244353;
ll mod(ll x)
{
    return ((x%m + m) % m);
}
ll add(ll a,ll b)
{
    return mod( mod(a) + mod(b));
}
ll mul(ll a,ll b)
{
    return mod( mod(a) * mod(b));
}


int main()
{
    fastIo();
    ll n,k;
    cin>>n>>k;
    vector<ll>v;
    ll ans=0,ans2=1,temp=n-k+1;
    map<ll,ll>mp;
    for(int i=1;i<=n;i++){
        ll a;cin>>a;
        mp[a]=i;
    }
    for(auto a=mp.rbegin();a!=mp.rend();a++){
        if(k==0){
            break;
        }
        ans+=a->first;
        v.push_back(a->second);
        k--;
    }
    sort(v.begin(),v.end());

    for(int i=0;i<v.size()-1;i++){
        //cout<<v[i]<<" "<<v[i+1]<<endl;
        ans2=  mul (ans2 ,(v[i+1]-v[i])) ;
    }

    cout<<ans<<" "<<ans2<<endl;
    return 0;
}
