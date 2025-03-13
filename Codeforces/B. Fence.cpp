#include<bits/stdc++.h>
using namespace std;
#define ll long long
//ll n=1e+9;
int main(){
    ll n,k;cin>>n>>k;
    vector<ll>v;
    for(int i=0;i<n;i++){
        ll a;cin>>a;
        v.push_back(a);
    }
 
 
    for(int i=1;i<n;i++){
        v[i]+=v[i-1];
    }
    ll maxx=INT_MAX,index=0;
    for(int i=0;i+k<=n;i++){
        //cout<<i+1<<endl;
        if(i==0){
            if(maxx>v[i+k-1]){
                maxx=v[i+k-1];index=i;
            }
        }
        else {
            if(maxx > (v[i+k-1]-v[i-1]) ){
                maxx=(v[i+k-1]-v[i-1]);index=i;
            }
        }
    }
    //cout<<maxx<<endl;
    cout<<index+1<<endl;
    return 0;
}