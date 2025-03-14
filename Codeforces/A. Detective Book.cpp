#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n;cin>>n;
    vector<ll>v;
    map<ll,ll>mp;
    for(int i=0;i<n;i++){
        ll a;cin>>a;
        v.push_back(a);
        mp[a]=i;
    }
    ll count=0;
    for(int i=0;i<n;i++){
        ll s=mp[v[i]];
        ll j=i;
        //cout<<i<<" start "<<endl;
        while(j<=s){
            //cout<<j<<" "<<v[j]<<endl;
            if(s < v[j]-1){
                s=v[j]-1;
            }
            j++;
        }
        i=s;count++;
    }
    cout<<count<<endl;
    return 0;
}