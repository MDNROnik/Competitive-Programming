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
        ll p=0,ne=0;
        for(int i=0;i<n;i++){
            ll a;cin>>a;
            if(a>0){
                p++;
            }
            else{
                ne++;
            }
        }
        ll ma=0;
        for(ll i=1;i<=p;i++){
            ma=i;
            cout<<ma<<" ";
        }
        for(ll i=1;i<=ne;i++){
            ma--;
            cout<<ma<<" ";
        }
        cout<<endl;
        //cout<<p<<" "<<ne<<endl;
        ll mi=0;
        while(p>0 && ne>0){
            mi++;
            cout<<mi<<" ";p--;
            mi--;
            cout<<mi<<" ";ne--;
        }
        while(p>0){
            mi++;
            cout<<mi<<" ";p--;
        }
        while(ne>0){
            mi++;
            cout<<mi<<" ";ne--;
        }
        cout<<endl;

    }


    return 0;
}