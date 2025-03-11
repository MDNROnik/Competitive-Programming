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
    ll n;
    cin>>n;
    vector<ll>v;
    for(ll i=0; i<n; i++)
    {
        ll a;
        cin>>a;
        v.push_back(a);
    }
    ll in=1,jn=1;
    ll c=0,count=0;
    ll pm=-1;

    for(ll i=0; i<n-1;)
    {
        //cout<<pm<<endl;
        if(v[i] <= v[i+1] && pm<=v[i])
        {
            pm=v[i];
            i++;
        }
        else if(v[i] > v[i+1] && c==0)
        {
            ll m=v[i];
            in=i+1;
            while(1)
            {
                if(i+1 == n-1)
                {
                    if(v[i] >= v[i+1] && pm<=v[i+1])
                    {
                        jn=i+1+1;
                        i++;count++;
                        break;
                    }
                    else if(v[i] >= v[i+1] && pm > v[i+1])
                    {
                        c+=2;
                        i++;
                        break;
                    }
                    else if(v[i] < v[i+1])
                    {
                        jn=i+1;
                        i++;
                        break;
                    }
                }
                else
                {
                    if(v[i] >= v[i+1] && pm<=v[i+1])
                    {
                        jn=i+1+1;
                        i++;
                    }
                    else if(v[i] >= v[i+1] && pm > v[i+1])
                    {
                        c+=2;
                        i++;
                        break;
                    }
                    else if(v[i] < v[i+1])
                    {
                        jn=i+1;
                        i++;
                        break;
                    }
                }
            }
            c++;
            pm=m;
        }
        else
        {
            c+=2;
            break;
        }
    }

    //cout<<pm<<endl;
    if(pm>v[n-1] && count==0){
        c+=2;
    }
    if(c==1)
    {
        cout<<"yes"<<endl;
        cout<<in<<" "<<jn<<endl;
    }
    else if(c==0)
    {
        cout<<"yes"<<endl;
        cout<<1<<" "<<1<<endl;
    }
    else
    {
        cout<<"no"<<endl;
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

 