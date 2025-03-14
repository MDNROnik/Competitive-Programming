#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll test;cin>>test;
    while(test--){
         ll n,k;cin>>n>>k;
         ll temp=n/k;
         ll count=k*temp;
         n-=(k*temp);
         k/=2;
         if(n<=k){
            count+=n;
         }
         else{
            count+=k;
         }
         cout<<count<<endl;
    }
    return 0;
}