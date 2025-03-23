#include<bits/stdc++.h>
using namespace std;
int main(){
    int test,n,count=0;cin>>test;
    while(test--){
        cin>>n;
        int arr[n],arr2[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];arr2[i]=arr[i];
        }
        sort(arr,arr+n);
        if(arr[0]!=arr[1]){count=arr[0];}
        else{count=arr[n-1];}
        for(int i=0;i<n;i++){
            if(arr2[i]==count){
                cout<<i+1<<endl;break;
            }
        }
    }
    return 0;
}




 