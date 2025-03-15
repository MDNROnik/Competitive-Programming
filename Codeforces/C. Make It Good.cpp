#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios_base::sync_with_stdio(false);
    ll test;cin>>test;
    while(test--){
        ll n;cin>>n;
        vector<ll>vec;
        for(int i=0;i<n;i++){
            ll a;cin>>a;
            vec.push_back(a);
        }
        int i=0;
        for( i=n-1;i>=1;i--){
            if(vec[i]<=vec[i-1]){

            }
            else{
                break;
            }
        }
        for(;i>=1;i--){
            if(vec[i]>=vec[i-1]){

            }
            else{
                break;
            }
        }
        if(i==n){
            cout<<0<<endl;
        }
        else{
            cout<<i<<endl;
        }
    }
    return 0;
}