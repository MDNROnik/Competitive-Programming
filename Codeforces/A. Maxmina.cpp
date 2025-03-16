#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define mod 1000000007

int main(){
    ios_base::sync_with_stdio(false);

    ll test;cin>>test;
    while(test--){
        ll n,k;cin>>n>>k;
        map<ll,ll>mp;
        for(int i=0;i<n;i++){
            ll a;cin>>a;
            mp[a]++;
        }
        if(mp[0]==n){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
}