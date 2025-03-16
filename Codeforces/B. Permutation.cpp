#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll test;
    cin>>test;
    while(test--){
        ll n,t=1;cin>>n;
        map<ll,ll>mp;
        cout<<2<<endl;
        ll i=1;
        vector<ll>vec;
        while(i<=n){
            if(mp[i]==0){
                ll temp=i;
                while(temp<=n){
                    mp[temp]++;
                    vec.push_back(temp);
                    temp*=2;
                }
            }
            i++;
        }
        for(int i=0;i<vec.size();i++){
            cout<<vec[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}