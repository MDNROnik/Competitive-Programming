#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll test;cin>>test;
    while(test--){
        ll n,a,b;cin>>n>>a>>b;
        if(a<=b){
            if(n % a==0){
                cout<<(n/a)<<endl;
            }
            else{
                cout<<(n/a)+1<<endl;
            }
        }
        else{
            cout<<1<<endl;
        }
    }
    return 0;
}