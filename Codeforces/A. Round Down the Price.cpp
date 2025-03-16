#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll test;cin>>test;
    while(test--){
        ll n;
        cin>>n;
        ll temp=0,i=0;
        while(temp<=n){
            temp=pow(10,i);
            i++;
        }
        i-=2;
        temp=pow(10,i);
        cout<<n-temp<<endl;
    }

    return 0;
}