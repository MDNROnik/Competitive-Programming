#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll test;
    cin>>test;
    while(test--){
        ll a=1,b=1,c;
        ll n;
        cin>>n;
        if(n%2==0){
            ll num=n/2;
            if(num%2==0){
                c=num+1;
            }
            else{
                c=num-1;
            }
            cout<<a<<" "<<b<<" "<<c<<endl;
        }
        else{
            cout<<-1<<endl;
        }
        //6cout<<(a ^ b)+(a ^ c)+(b ^ c)<<endl;
    }
    return 0;
}
