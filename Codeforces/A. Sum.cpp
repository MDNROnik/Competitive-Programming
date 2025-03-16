#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios_base::sync_with_stdio(false);
    ll test;cin>>test;
    while(test--){
        ll a,b,c;cin>>a>>b>>c;
        if(a+b==c || b+c==a || c+a==b){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}