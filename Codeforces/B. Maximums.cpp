#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll n;
void solve(ll arr[],ll n){
    ll temp=0,ma=0;
    for(int i=0;i<n;i++){
        temp+=arr[i];
        arr[i]=temp;
        if(temp>ma){ma=temp;}
        if(temp<ma){temp=ma;}
    }
}



int main(){
    ios_base::sync_with_stdio(false);
    ll n;cin>>n;
    ll arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    solve(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}