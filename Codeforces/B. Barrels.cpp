#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    long long num,k=0,j=2,mx=0,mi=0;
    while(test--){
        cin>>num>>k;
        long long arr[num];
        for(int i=0;i<num;i++){
            cin>>arr[i];
        }
        sort(arr,arr+num);
        j=2;
        while(k!=0){
            //cout<<arr[num-1]<<" "<<arr[num-j]<<endl;
            arr[num-1]=arr[num-1]+arr[num-j];
            arr[num-j]=0;
            j++;k--;
        }
        sort(arr,arr+num);
        mx=arr[num-1];mi=arr[0];
        cout<<mx-mi<<endl;
    }
    return 0;
}