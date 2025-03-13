#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define fastIo() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
ll gcd(ll a, ll b)
{

    if(b == 0) {
            return a;
    }
    else {
        return gcd(b, a % b);
    }
}

int main()
{
    fastIo();
    ll test;
    cin>>test;
    while(test--)
    {
        ll n;cin>>n;
        vector<ll>v;
        for(int i=0;i<n;i++){
            ll a;cin>>a;
            if(i==0){
                v.push_back(a);
            }
            else{
                v.push_back(a+v[i-1]);
            }
        }
        ll maxx=0;
        for(int i=0;i<n-1;i++){
            ll a=v[i];
            ll b=v[n-1]-v[i];
            ll temp=gcd(a,b);
            if(temp>maxx){
                maxx=temp;
            }
        }
        cout<<maxx<<endl;

    }
    return 0;
}
