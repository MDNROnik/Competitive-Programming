#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n;cin>>n;
    ll arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    int maxx=0;
    for(int i=0;i<n;i+=2){
        maxx+=(arr[i+1]-arr[i]);
    }

    cout<<maxx<<endl;

    return 0;
}