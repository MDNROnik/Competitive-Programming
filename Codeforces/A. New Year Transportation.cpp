#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n,t;cin>>n>>t;
    vector<ll>vec;
    vec.push_back(0);
    for(int i=0;i<n-1;i++){
        ll a;cin>>a;
        vec.push_back(a);
    }
    ll cur=1;
    ll i=1;
    for(;i<=t;){
        //cout<<i<<endl;
        if(i==t){
            cout<<"YES"<<endl;return 0;
        }
        i+=vec[i];
        //cout<<i<<endl;
    }
    cout<<"NO"<<endl;


    return 0;
}