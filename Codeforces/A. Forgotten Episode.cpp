#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    long long arr[n-1],num=0;
    for(int i=0;i<n-1;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    for(int i=0;i<n;i++){
        if(i+1 != arr[i]){
            num=i+1;break;
        }
    }
    cout<<num<<endl;
    return 0;
}
 