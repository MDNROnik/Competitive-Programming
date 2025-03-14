#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll test;cin>>test;
    while(test--){
        ll n;cin>>n;
        if(n>=10){
            ll count=9;
            ll inc=10;
            ll amount=10;
            while(amount < n){
                amount+=inc;
                if(n >= amount){
                    count++;
                }
                else{
                    amount-=inc;break;
                }
                if(amount==(inc*10)){
                    inc=amount;
                }
                //cout<<amount<<" "<<inc<<endl;
            }
            ll c=0;
            while(amount>=10){
                c++;amount/=10;
                //cout<<amount<<endl;
            }
            ll ne=amount;
            while(c--){
                amount*=10;
                amount+=ne;
            }
            //cout<<amount<<" "<<n<<endl;
            if(amount <= n){
                count++;
            }
            cout<<count<<endl;
         }
         else{
            cout<<n<<endl;
         }
    }


    return 0;
}