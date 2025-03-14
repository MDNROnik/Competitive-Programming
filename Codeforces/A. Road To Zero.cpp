#include <bits/stdc++.h>
using namespace std;
#define ll long long
vector<string>arr;
map<int,int>mp;
map<int,int>::iterator it;
int main(){
    ll test;
    cin>>test;
    while(test--){
        ll x,y;cin>>x>>y;
        ll a,b;cin>>a>>b;
        ll sum=0;
        ll temp=min(x,y);
        ll t=temp;
        ll temp2=max(x,y);
        ll t2=temp2;
        sum+=(temp*b);
        temp2-=temp;
        sum+=(temp2*a);
        ll sum2=0;

        sum2=(t+t2)*a;

        cout<<min(sum,sum2)<<endl;

    }
    return 0;
}