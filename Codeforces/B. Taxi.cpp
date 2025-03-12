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

//Mod Power
ll modPow(ll x, ll y)
{
    if(y==0) return 1LL;
    if(y==1) return mod(x);
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
    if(y==0) return 1LL;
    if(y==1) return mod(x);
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

int main()
{
    fastIo();
    ll n,temp=0;
    scanf("%lld",&n);
    map<ll,ll>mp;
    for(ll i=0;i<n;i++){
        ll a;
        scanf("%lld",&a);
        mp[a]++;
    }
    ll count=0;
    if(mp[4]>0){
        count+=mp[4];
    }
    if(mp[3]>0){
        if(mp[1]>0){
            if(mp[1]>mp[3]){
                count+=mp[3];
                mp[1]-=mp[3];
                mp[3]=0;
            }
            else{
                count+=mp[1];
                mp[3]-=mp[1];
                count+=mp[3];
                mp[1]=0,mp[3]=0;
            }
        }
        else{
            count+=mp[3];
            mp[3]=0;
        }
    }
    if(mp[2]>0){
        if(mp[1]>0){
            ll temp=mp[2]*2;
            temp+=mp[1];
            if( temp%4 ==0){
                count+=temp/4;
            }
            else{
                count+=temp/4;
                count++;
            }
            mp[2]=0,mp[1]=0;
        }
        else{
            ll temp=mp[2];
            temp*=2;
            if(temp%4==0){
                count+=(temp/4);
            }
            else{
                count+=(temp/4);
                count++;
            }
            mp[2]=0;
        }
    }
    if(mp[1]%4==0){
        count+=mp[1]/4;
    }
    else if(mp[1]%4!=0 ){
        count+=mp[1]/4;
        count++;
    }

    cout<<count<<endl;
    return 0;
}