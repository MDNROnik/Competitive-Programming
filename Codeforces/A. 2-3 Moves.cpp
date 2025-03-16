#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test;
    cin>>test;
    while(test--){
        ll n;cin>>n;
        if(n%3==0){
            cout<<n/3<<endl;
        }
        else if(n%3==2){
            cout<<(n/3)+1<<endl;
        }
        else if(n%3==1){
           ll temp=n/3;
           ll t=n%3;
           if(temp==0 ){
            if(n==2){cout<<1<<endl;}
            else{cout<<2<<endl;}
           }
           else{
            temp--;
            t+=3;
            t/=2;
            cout<<temp+t<<endl;
           }
        }
    }
    return 0;
}
 