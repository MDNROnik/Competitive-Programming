#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N =1e7+10;
long long arr[N];
int main(){
    ll test;
    cin>>test;
    while(test--){
        ll n,z;
        cin>>n>>z;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        //cout<<"hello"<<endl;
        for(int i=0;i<n;i++){
            //ll temp=arr[i];
            arr[i]=arr[i] | z;
            z=arr[i] & z;
        }
        ll maxx=0;
        for(int i=0;i<n;i++){
            if(maxx<arr[i]){maxx=arr[i];}
        }
        cout<<maxx<<endl;
    }
    return 0;
}