#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    vector<ll>v;
    for(int i=1;i<10000000;i++){
        v.push_back(0);
    }
    ll n;cin>>n;
    while(n--){
        ll a;cin>>a;
        v[a]++;
    }
    ll count=0;
    for(int i=0;i<v.size();i++){
        if(v[i]<=1){
 
        }
        else{
            ll t=v[i];
            v[i]=1;
            t--;
            v[i+1]+=t;
            count+=t;
        }
    }
    cout<<count<<endl;
 
 
 
    return 0;
}