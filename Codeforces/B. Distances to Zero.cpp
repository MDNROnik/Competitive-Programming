#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n;cin>>n;
    vector<ll>z,v;
    for(ll i=0;i<n;i++){
        ll a;cin>>a;
        v.push_back(a);
        if(a==0){
            z.push_back(i);
        }
    }
    ll j=0,k=0;
    for(ll i=0;i<n;i++){
        if(z[k]==i){
            j=k;k++;
        }
        ll pre=abs(z[j]-i);
        ll next=abs(z[k]-i);
        if(pre>=next){
            cout<<next<<" ";
        }
        else{
            cout<<pre<<" ";
        }
    }
    cout<<endl;


    return 0;
}