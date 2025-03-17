#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n;cin>>n;
    ll arr[n];
    map<int,int>mp;
    map<int,int>::iterator it;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        mp[arr[i]]++;
    }

    int maxx;
    for(it=mp.begin();it!=mp.end();it++){
        if(maxx < it->second){
            maxx=it->second;
        }
    }
    cout<<maxx<<endl;

    return 0;
}