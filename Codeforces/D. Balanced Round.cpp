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
        ll n,d;cin>>n>>d;
        vector<ll>v;
        ll ans=1e9;
        for(int i=0;i<n;i++){
            ll a;cin>>a;
            v.push_back(a);
        }
        sort(v.begin(),v.end());
        ll c=0;
        for(int i=0;i<n;){
            ll count=0;
            int j;
            for(j=i;j<n-1;j++){
                //cout<<i<<" "<<j<<endl;
                if(count==0){
                    //cout<<i<<endl;

                    count++;
                    if( abs(v[j]-v[j+1])<=d  ){
                        count++;c++;//cout<<11<<endl;
                    }
                    else{
                        break;
                    }
                }
                else{
                    //cout<<i<<" "<<j<<endl;
                    if( (abs(v[j]-v[j+1])<=d) && abs(v[j]-v[j-1])<=d  ){
                        count++;c++;
                    }
                    else{
                        break;
                    }
                }
            }
            //cout<<i<<endl;
            //cout<<count<<endl;

            i=j+1;
            if(ans> (n-count)  ){
                ans=(n-count);
            }
        }
        //cout<<ans<<endl;

        if(n==1){
            ans=0;
        }
        if(c==0 && n>1){

            ans=n-1;
        }

        cout<<ans<<endl;
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
 