#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define fastIo() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
//bool prime[90000001];
//int n=90000000;
//vector<int>v;
//ll temp=0;
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
        if(prime[i]==false)v.push_back(i);
    }
}*/
//Mod Of a Number
const ll m=998244353;
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
ll modPow(ll x, ll y){
    if(y==0) return 1LL;
    if(y==1) return mod(x);
    ll res=1;
    while(y){
        if(y%2==1)
            res=mul(res,x);
        x=mul(x,x);
        y/=2;
    }
    return res;
}

//Power X of Y
ll Pow(ll x, ll y){
    if(y==0) return 1LL;
    if(y==1) return mod(x);
    ll res=1;
    while(y){
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
    ll t;cin>>t;
    string s;cin>>s;
    ll first=0,second=0;
    for(int i=s.size()-1;i>=1;i--){
        if(s[i]==s[i-1]){
            second++;
        }
        else{second++;break;}
    }
    if(s[0]==s[s.size()-1]){
        //cout<<11<<endl;
        ll ans=0,c=0;second++;
        for(int i=0;i<s.size()-1;i++){
            if(c==0){
                ans=add(ans,second);
            }
            else if(c==1){
                ans=add(ans,second);break;
            }
            else{
                break;
            }
            if(s[i]==s[i+1]){
            }
            else{
                c++;
            }
        }
        cout<<ans<<endl;
    }
    else{
        ll ans=0,c=0;second++;
        //cout<<second<<endl;
        for(int i=0;i<s.size()-1;i++){
            if(c==0){
                //ans=add(ans,second);
                if(i==0){
                    ans=add(ans,second);
                }
                else{
                    ans++;
                }
                //cout<<ans<<endl;
            }
            else if(c==1){
                ans++;break;
            }
            else{
                break;
            }
            //cout<<ans<<endl;
            if(s[i]==s[i+1]){
                //ans=add(ans,second);
            }
            else{
                c++;ans++;break;
            }

        }
        cout<<ans<<endl;
    }
    return 0;
}
