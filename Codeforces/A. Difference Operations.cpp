#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll test;cin>>test;
    while(test--){
        ll n;cin>>n;
        ll arr[n];
        ll temp=0;
        ll count=0;
        for(ll i=0;i<n;i++){
            cin>>arr[i];
        }
        if(arr[0]==1){
            cout<<"YES"<<endl;
        }
        else if(arr[0]!=1){
            for(ll i=1;i<n;i++){
                if(arr[i]%arr[0]==0){}
                else{
                    count++;break;
                }
            }
            if(count==0){cout<<"YES"<<endl;}
            else{
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}