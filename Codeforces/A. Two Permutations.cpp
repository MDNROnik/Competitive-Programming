#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios_base::sync_with_stdio(false);
    ll test;cin>>test;
    while(test--){
        ll n,a,b;cin>>n>>a>>b;

        if(a==b && n==a){
            cout<<"YES"<<endl;
        }
        else if((n - (a+b)) > 1 ){
            cout<<"YES"<<endl;
        }
        else if((n - (a+b)) <= 0 ){
            cout<<"NO"<<endl;
        }
        else if((n - (a+b)) == 1 ){
            cout<<"NO"<<endl;
        }
    }
    return 0;
}