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
        cin>>n>>m;
        vector<pair<ll,ll>>v;
        vector<vector<ll>>vec;
        for(ll i=0;i<n;i++){
            vector<ll>t;
            for(ll j=0;j<m;j++){
                t.push_back(0);
                ll a;cin>>a;
                v.push_back({a,i});
            }
            vec.push_back(t);
        }
        sort(v.begin(),v.end());
        ll i=0,j;
        for(j=0;j<m;j++){
            ll index=v[j].second;
            vec[index][i]=v[j].first;
            i++;
        }
        for(j;j<v.size();j++){
            //cout<<v[j].first<<" "<<v[j].second<<endl;
            for(ll i=0;i<m;i++){

                ll index=v[j].second;
                if( vec[index][i]==0  ){
                    vec[index][i]=v[j].first;break;
                }
            }
        }










        for(ll i=0;i<n;i++){
            for(ll j=0;j<m;j++){
                cout<<vec[i][j]<<" ";
            }
            cout<<endl;
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