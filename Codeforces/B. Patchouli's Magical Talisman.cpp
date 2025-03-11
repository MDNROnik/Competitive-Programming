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
int main()
{
    fastIo();
    ll test;
    cin>>test;
    while(test--)
    {
        ll n;
        cin>>n;
        vector<ll>v;
        ll odd=0;
        ll small=1000000000;
        for(ll i=0; i<n; i++)
        {
            ll a;
            cin>>a;
            if(a%2==0){
                //cout<<a<<endl;
                ll c=1;
                while(1){
                    a>>=1;
                    if( (a&1) != 0){
                        break;
                    }
                    //cout<<a<<" "<<c<<endl;
                    c++;
                }
                if(c<small){
                    small=c;
                }
            }
            else{
                odd++;
            }
        }
        if(odd>0){
            cout<<n-odd<<endl;
        }
        else{
            //cout<<small<<endl;
            n--;
            cout<<n+small<<endl;
        }

    }

    return 0;
}
 