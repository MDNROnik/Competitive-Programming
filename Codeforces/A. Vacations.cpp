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
    //sieve();
    fastIo();
    ll n;cin>>n;
    vector<ll>v;
    for(ll i=0;i<n;i++){
        ll a;cin>>a;
        v.push_back(a);
    }
    ll count=0;
    ll gc=0;
    for(ll i=0;i<n;i++){
        //cout<<v[i]<<" "<<gc<<" "<<count<<endl;
        if(v[i]==0){
            count++;
            gc=0;
        }
        else if(v[i]==1){
            if(gc==1){
                count++;gc=0;
            }
            else{
                gc=1;
            }
        }
        else if(v[i]==2){
            if(gc==2){
                count++;gc=0;
            }
            else{
                gc=2;
            }
        }
        else if(v[i]==3){
            if(gc==1){
                gc=2;
            }
            else if(gc==2){
                gc=1;
            }
            else if(gc==0){
                if(i+1<n){
                    ll c=0,j;
                    for(j=i+1;j<n;j++){
                        if(v[j]==3){
                            c++;
                        }
                        else{
                            break;
                        }
                    }
                    if(c==0){
                        if(v[i+1]==1){
                            gc=2;
                        }
                        else{
                            gc=1;
                        }
                    }
                    else if(c%2==0){
                        if(j==n){
                            gc=1;
                        }
                        else if(j<n && v[j]==1){
                            gc=2;
                        }
                        else if(j<n && v[j]==2){
                            gc=1;
                        }
                    }
                    else{
                        if(j==n){
                            gc=2;
                        }
                        else if(j<n && v[j]==1){
                            gc=1;
                        }
                        else if(j<n && v[j]==2){
                            gc=2;
                        }
                    }
                }
            }
        }
        //cout<<v[i]<<" "<<gc<<" "<<count<<endl<<endl;
    }
    cout<<count<<endl;

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
        if(prime[i]==false)
        {
            v.push_back(i);
        }
    }
}
*/