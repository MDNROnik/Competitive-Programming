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
const ll m=1e9+7;
ll mod(ll x){
    return ((x%m + m) % m);
}
ll add(ll a,ll b){
    return mod( mod(a) + mod(b));
}
ll mul(ll a,ll b){
    return mod( mod(a) * mod(b));
}


int main()
{
    fastIo();
    ll test;cin>>test;
    while(test--){
        ll n;cin>>n;
        vector<ll>v;
        for(int i=0;i<n;i++){
            ll a;cin>>a;
            v.push_back(a);
        }
        ll ans=0,fi=0,c=0,tag=0;
        for(int i=0;i<n;i++){
            if(v[i]==1){
                c++;
                if(tag==1){
                    fi++;
                    if(fi>=ans){
                        tag=0;
                    }
                }
                else if(tag==0){
                    ans++;
                }
            }
            else if(v[i]==2){
                fi=c/2;fi++;
                if(fi<ans){
                    tag=1;
                }
                else{
                    tag=0;
                }
            }
            //cout<<i+1<<" "<<c<<" "<<fi<<" "<<ans<<endl;
        }
        cout<<ans<<endl;

    }


    return 0;
}