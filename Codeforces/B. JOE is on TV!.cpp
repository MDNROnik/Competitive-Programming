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
    double d=0;
    while(test>=1){
        double temp;
        double one=1;
        temp=(one/test);
        //printf("%.12lf\n",temp);
        d+=temp;
        test--;
    }
    printf("%.12lf\n",d);

    return 0;
}