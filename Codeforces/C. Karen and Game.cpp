#include<bits/stdc++.h>
using namespace std;
#define ll int
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
    ll n,m;
    cin>>n>>m;
    vector<vector<int>>v;
    for(int i=0; i<n; i++)
    {
        vector<int>vec;
        for(int j=0; j<m; j++)
        {
            ll a;
            cin>>a;
            vec.push_back(a);

        }
        v.push_back(vec);
    }
    if(n<=m)
    {
        vector<int>mp(n+1,0);
        vector<pair<string,int>>vp;
        for(int i=0; i<n; i++)
        {
            int c=0;
            set<pair<int,pair<int,int>>>sp;
            for(int j=0; j<m; j++)
            {
                if(v[i][j]>0)
                {
                    sp.insert({v[i][j],{i,j}});
                }
                else
                {
                    c++;
                    break;
                }
            }
            if(c==0)
            {
                pair<int,pair<int,int>>p=*(sp.begin());
                mp[p.second.first]=p.first;
                while(p.first--)
                {
                    vp.push_back({"row",p.second.first+1});
                }
            }
        }
        ll no=0;
        for(int j=0; j<m; j++)
        {
            int c=0;
            set<int>s;
            for(int i=0; i<n; i++)
            {
                //cout<<v[i][j]<<" "<<mp[i]<<endl;
                s.insert( v[i][j]-mp[i]  );
            }
            //cout<<j<<endl;
            if(s.size()>1)
            {
                no++;
                break;
            }
            c=*(s.begin());
            while(c>0)
            {
                vp.push_back({"col",j+1});
                c--;
            }

        }
        //cout<<no<<endl;
        if(no==1)
        {
            cout<<-1<<endl;
            return 0;
        }
        cout<<vp.size()<<endl;
        for(int i=0; i<vp.size(); i++)
        {
            cout<<vp[i].first<<" "<<vp[i].second<<endl;
        }
        return 0;
    }
    else
    {
        //cout<<111<<endl;
        vector<int>mp(m+1,0);
        vector<pair<string,int>>vp;
        for(int i=0; i<m; i++)
        {
            int c=0;
            set<pair<int,pair<int,int>>>sp;
            for(int j=0; j<n; j++)
            {
                if(v[j][i]>0)
                {
                    sp.insert({v[j][i],{j,i}});
                }
                else
                {
                    c++;
                    break;
                }
            }
            //cout<<c<<endl;
            if(c==0)
            {
                pair<int,pair<int,int>>p=*(sp.begin());
                mp[p.second.second]=p.first;
                while(p.first--)
                {
                    vp.push_back({"col",p.second.second+1});
                }
            }
        }
        ll no=0;
        for(int i=0; i<n; i++)
        {
            int c=0;
            set<int>s;
            for(int j=0; j<m; j++)
            {
                s.insert( v[i][j]-mp[j]  );
            }
            //cout<<j<<endl;
            if(s.size()>1)
            {
                no++;
                break;
            }
            c=*(s.begin());
            while(c>0)
            {
                vp.push_back({"row",i+1});
                c--;
            }

        }
        //cout<<no<<endl;
        if(no==1)
        {
            cout<<-1<<endl;
            return 0;
        }
        cout<<vp.size()<<endl;
        for(int i=0; i<vp.size(); i++)
        {
            cout<<vp[i].first<<" "<<vp[i].second<<endl;
        }
        return 0;
    }
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