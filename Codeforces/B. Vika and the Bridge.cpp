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
        ll n,k;cin>>n>>k;

        vector<ll>v;map<int,vector<int>>mp;

        for(int i=0;i<n;i++){
            ll a;cin>>a;v.push_back(a);
            if(mp[a].size()==0){
                mp[a].push_back(0);
            }
            mp[a].push_back(i+1);
        }
        for(auto a=mp.begin();a!=mp.end();a++){
            a->second.push_back(n+1);
        }

        ll ans=1e9;
        for(auto a=mp.begin();a!=mp.end();a++){
            vector<int>v,v2;
            //cout<<a->first<<endl;
            v=a->second;
            for(int i=1;i<v.size();i++){
                ll temp=abs(v[i-1]-v[i]);
                temp--;
                v2.push_back(temp);
            }
            sort(v2.begin(),v2.end());
            if(v2[v2.size()-1]==v2[v2.size()-2]){
                if(v2[v2.size()-1] < ans){
                    //cout<<a->first<<endl;
                    ans=v2[v2.size()-1];
                    //cout<<ans<<endl;
                }
            }
            else{
                //cout<<a->first<<endl;
                ll temp=v2[v2.size()-1];
                ll t=temp/2;
                ll si=v2.size()-1;
                while(si>=0){
                    if(v2[si]==temp){
                        si--;
                        continue;
                    }
                    else{
                        if(t>v2[si]){
                            if(ans>t){
                                //cout<<22<<endl;

                                //cout<<a->first<<endl;
                                ans=t;
                                //cout<<ans<<endl;
                                break;
                            }
                        }
                        else{
                            //cout<<ans<<" "<<t<<" "<<v2[si]<<endl;
                            if(ans>v2[si]){
                                //cout<<22<<endl;
                                //cout<<a->first<<endl;
                                ans=v2[si];
                                //cout<<ans<<endl;
                                break;
                            }
                        }
                        break;
                    }
                    si--;
                }
            }
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