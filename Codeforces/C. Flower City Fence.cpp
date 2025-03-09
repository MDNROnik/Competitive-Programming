#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastIo() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
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
    while(test--)
    {
        ll n,m;
        cin>>n;
        vector<ll>v,v2;
        for(ll i=0;i<n;i++){
            ll a;cin>>a;
            v.push_back(a);
            v2.push_back(a);
        }
        ll j=n-1;
        ll no=0;
        for(ll i=0;v[i]>0;){
            ll count=1;
            ll k=i;
            ll l=0,r=n-1,mid;
            ll index=-1;
            //cout<<v[i]<<endl;
            while(l<r){
                mid=l+r;mid/=2;
                //cout<<l<<" "<<r<<endl;
                //cout<<mid<<" "<<v[mid]<<endl<<endl;;
                if( v[mid]>=v[i] ){
                    index=max(index,mid);
                    l=mid+1;
                }
                else if(v[mid]<v[i]){
                    r=mid;
                }
                //cout<<l<<" "<<r<<endl;
            }
            //cout<<index<<endl;
            //cout<<v[i]<<" ";
            while(index+1<n && v[i]<=v[index+1]){
                index++;
            }
            //cout<<index<<endl;
            v[i]--;

           /*
            while(k+1<n && v[k]==v[k+1]){
                v[k]--;
                count++;
                k++;
            }
            if(count>1){
                v[k]--;
            }

            if(count==1){v[i]--;}*/
            count=index+1;
            if(count!=v2[j]){
                no=1;break;
            }
            j--;
        }
        if(no==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
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