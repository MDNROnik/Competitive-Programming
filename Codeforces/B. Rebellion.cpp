#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ios_base::sync_with_stdio(false);
    ll test;cin>>test;
    while(test--){
        ll n;cin>>n;
        vector<ll>arr;
        for(int i=0;i<n;i++){
            ll a;cin>>a;
            arr.push_back(a);
        }
        //cout<<5555555<<endl;
        ll i=0;ll j=n-1;ll count=0;
        while(i<j){
            //cout<<i<<" "<<j<<endl;
            if(arr[i]==1 && arr[j]==0){
                count++;i++;j--;
            }
            else if(arr[i]==0 && arr[j]==1){
                i++;j--;
            }
            else if(arr[i]==0 && arr[j]==0){
                i++;
            }
            else if(arr[i]==1 && arr[j]==1){
                j--;
            }
        }
        cout<<count<<endl;
    }
}