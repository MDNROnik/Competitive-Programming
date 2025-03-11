#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define fastIo() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
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
}
*/
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
    ll test;
    cin>>test;
    while(test--){
        string s,s2,small,big,b;
        cin>>s;
        cin>>s2;
        small+=min(s,s2);
        big+=max(s,s2);
        b+=max(s,s2);
        ll c=0,i=0;
        while(1){
            //cout<<small<<" "<<b<<" "<<big<<endl;
            ll m=big.size();
            ll n=small.size();
            if(i==m){
                break;
            }
            else if( (i+n) > m ){
                big+=b;
            }
            string temp=big.substr(i,n);
            i+=n;
            if(small!=temp){
                c++;break;
            }
        }
        if(c==0){
            cout<<big<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }

    return 0;
}