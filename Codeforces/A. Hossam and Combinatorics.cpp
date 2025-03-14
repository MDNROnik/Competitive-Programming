#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test;cin>>test;
    while(test--){
        ll n;cin>>n;
        vector<ll>vec(n);
        map<ll,ll>mp;
        map<ll,ll>::iterator it,it2;
        for(int i=0;i<n;i++){
            cin>>vec[i];
            mp[vec[i]]++;
        }
        it=mp.begin();it2=mp.end();it2--;
        ll count=0;
        while(it->second--){
            count+=(it2->second * 2);
        }
        cout<<count<<endl;
    }

    return 0;
}