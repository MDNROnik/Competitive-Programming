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
        ll n,m;cin>>n>>m;
        vector<vector<ll>>vec;

        for(ll i=0;i<n;i++){
            vector<ll>v;
            for(ll j=0;j<m;j++){
                ll a;cin>>a;
                v.push_back(a);

            }
            vec.push_back(v);
        }
        ll maxx=0;
        map<pair<ll,ll>,ll>vis;
        for(ll i=0;i<n;i++){

            for(ll j=0;j<m;j++){

                if(vec[i][j]!=0 && vis[make_pair(i,j)]==0){
                    queue<pair<ll,ll>>q;
                    q.push(make_pair(i,j));
                    vis[make_pair(i,j)]=1;
                    ll count=vec[i][j];
                    while(q.size()>0){
                        pair<ll,ll>p=q.front();
                        //cout<<p.first<<" "<<p.second<<endl;
                        q.pop();

                        if( (p.first-1)>=0  && vis[ make_pair(p.first-1,p.second) ]==0 && vec[p.first-1][p.second]!=0 ){
                                count+=vec[p.first-1][p.second];
                                vis[ make_pair(p.first-1,p.second) ]=1;
                                q.push(make_pair(p.first-1,p.second));
                        }

                        if( (p.first+1)<n  && vis[ make_pair(p.first+1,p.second) ]==0 && vec[p.first+1][p.second]!=0 ){
                                count+=vec[p.first+1][p.second];
                                vis[ make_pair(p.first+1,p.second) ]=1;
                                q.push(make_pair(p.first+1,p.second));
                        }

                        if( (p.second-1)>=0  && vis[ make_pair(p.first,p.second-1) ]==0 && vec[p.first][p.second-1]!=0 ){
                                count+=vec[p.first][p.second-1];
                                vis[ make_pair(p.first,p.second-1) ]=1;
                                q.push(make_pair(p.first,p.second-1));
                        }

                        if( (p.second+1)<m  && vis[ make_pair(p.first,p.second+1) ]==0 && vec[p.first][p.second+1]!=0 ){
                                count+=vec[p.first][p.second+1];
                                vis[ make_pair(p.first,p.second+1) ]=1;
                                q.push(make_pair(p.first,p.second+1));
                        }

                    }
                    if(maxx<count){
                        maxx=count;
                    }
                }
            }
        }
        cout<<maxx<<endl;

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
 