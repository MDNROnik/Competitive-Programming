#include <bits/stdc++.h>
using namespace std;
#define ll long long
vector<ll>arr;
int main(){
    ll test;
    cin>>test;
    while(test--){
        int n,m;
        cin>>n>>m;
        int arr[n],sum=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];sum+=arr[i];
        }
        for(int i=0;i<n;i++){
            if(m>=arr[i]){
                sum-=arr[i];
                m-=arr[i];
            }
            else if(m<arr[i]){
                sum-=m;break;
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}