#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n,q,k;
    vector<ll>vec;
    cin>>n>>q>>k;
    for(int i=0;i<n;i++){
        ll a;cin>>a;
        vec.push_back(a);
    }
    while(q--){
        ll l,r;cin>>l>>r;
        ll num=r-l;num++;
        l--;r--;
        ll count=(vec[r]-vec[l]);count++;
        count-=num;
        count*=2;
        count+=(vec[l]-1);
        count+=(k-vec[r]);
        cout<<count<<endl;
    }
    return 0;
}