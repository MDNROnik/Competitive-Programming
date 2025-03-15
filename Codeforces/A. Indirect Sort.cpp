#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll test;cin>>test;
    while(test--){
        ll n;cin>>n;
        vector<ll>v;ll count=0;
        for(int i=0;i<n;i++){
            ll a;cin>>a;
            v.push_back(a);
        }
        if(v[0] > 1){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
}