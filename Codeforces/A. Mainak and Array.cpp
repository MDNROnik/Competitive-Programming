#include<bits/stdc++.h>
using namespace std;
#define ll long long
//ll n=1e+9;
int main(){
    ll test;cin>>test;
    while(test--){
        ll n;cin>>n;
        vector<ll>v;
        for(int i=0;i<n;i++){
            ll a;cin>>a;
            v.push_back(a);
        }
        map<ll,ll>mp;
        map<ll,ll>::iterator it;
        if(n==1){
            cout<<0<<endl;continue;
        }
        for(int i=0;i<n;i++){
            if(i==0){
                mp[(v[n-1]-v[i])]++;
                mp[(v[0]-v[1])]++;
            }
            else if(i<n-1){
                mp[(v[i]-v[0])]++;
                mp[(v[n-1]-v[i])]++;
                mp[(v[i]-v[i+1])]++;
                mp[(v[i-1]-v[i])]++;
            }
            else{
                mp[(v[i]-v[0])]++;
                mp[(v[i-1]-v[i])]++;
            }
        }
        it=mp.end();it--;
        cout<<it->first<<endl;
    }
    return 0;
}