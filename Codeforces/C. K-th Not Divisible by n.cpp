#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios_base::sync_with_stdio(false);
    ll test;cin>>test;
    while(test--){
        ll n,k;cin>>n>>k;
        ll n2=n-1;
        ll k2=k/n2;
        ll k3=k%n2;
        n*=k2;
        if(k3==0){
            cout<<n-1<<endl;
        }
        else{
            cout<<n+k3<<endl;
        }
    }

    return 0;
}