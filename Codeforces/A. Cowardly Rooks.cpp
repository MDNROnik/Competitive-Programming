#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios_base::sync_with_stdio(false);
    ll test;cin>>test;
    while(test--){
        ll n,m;cin>>n>>m;
        ll arr[m][2];
        map<ll,ll>mp;
        for(int i=0;i<m;i++){
            ll a,b;cin>>a>>b;
            mp[a]=1;
        }
        if(n>mp.size()){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}