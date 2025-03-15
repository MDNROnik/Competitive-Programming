#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll test;cin>>test;
    while(test--){
        ll n;cin>>n;
        vector<int>vec;
        ll sum=0;
        for(int i=0;i<n;i++){
            ll a;cin>>a;
            sum+=a;
        }
        cout<<abs(sum)<<endl;
    }
    return 0;
}