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
void subsetSumsHelper(int ind, vector < string > & arr, int n, vector < vector<string> > & ans,vector<string>str)
{
    //cout<<ind<<endl;
    if (ind == n)
    {
        ans.push_back(str);
        return;
    }
    //element is picked
    str.push_back(arr[ind]);
    subsetSumsHelper(ind + 1, arr, n, ans,str);
    //element is not picked
    str.pop_back();
    subsetSumsHelper(ind + 1, arr, n, ans,str);
}
void counthechar(ll index,vector<vector<string>> &ans,ll n,map< vector<string>,map<char,ll> > &mp)
{

    while(index<n)
    {
        vector<string>vec=ans[index];
        map<char,ll>m;
        for(ll i=0; i<vec.size(); i++)
        {
            string s=vec[i];
            for(ll j=0; j<s.size(); j++)
            {
                m[s[j]]++;
            }
        }
        mp[vec]=m;
        index++;
    }

    return;
}

int main()
{
    fastIo();
    ll test;cin>>test;
    while(test--){
        ll n,m,k;
        cin>>n>>m>>k;
        vector<ll>j,g;
        for(ll i=0;i<n;i++){
            ll a;cin>>a;
            j.push_back(a);
        }
        for(ll i=0;i<m;i++){
            ll a;cin>>a;
            g.push_back(a);
        }
        ll i=1;
        sort(j.begin(),j.end());
        sort(g.begin(),g.end());
        if(k>100){
            k=100+(k%2);
        }
        while(i<=k){
            if(i%2==0){
                if(g[0]<j[n-1]){
                    swap(g[0],j[n-1]);
                    sort(j.begin(),j.end());
                    sort(g.begin(),g.end());
                }
            }
            else{
                if(j[0]<g[m-1]){
                    swap(j[0],g[m-1]);
                    sort(j.begin(),j.end());
                    sort(g.begin(),g.end());
                }
            }
            i++;
        }
        ll sum=0;
        for(ll i=0;i<j.size();i++){
            //cout<<j[i]<<" ";
            sum+=j[i];
        }
        cout<<sum<<endl;
        //cout<<accumulate(j.begin(),j.end()-1,0ll)<<endl;
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