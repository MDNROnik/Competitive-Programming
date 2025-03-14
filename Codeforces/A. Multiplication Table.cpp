#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n,x;cin>>n>>x;
    ll count=0;
    for(int i=1;i<=n;i++){
        if((i*n) >= x ){
            if((x%i)==0 && (x/i)<=n){
                count++;
            }
            if((x%i)==0 && (x/i)==1){
                break;
            }
        }
    }
    cout<<count<<endl;

    return 0;
}