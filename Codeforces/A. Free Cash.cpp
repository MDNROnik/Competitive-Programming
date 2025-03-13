#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n;cin>>n;
    map<pair<ll,ll>,ll>mp;
    ll maxx=0;
    while(n--){
        ll h,m;
        cin>>h>>m;
        pair<ll,ll>p;
        p=make_pair(h,m);
        mp[p]++;
        if(maxx<mp[p]){
            maxx=mp[p];
        }
    }
    cout<<maxx<<endl;
 
    return 0;
}