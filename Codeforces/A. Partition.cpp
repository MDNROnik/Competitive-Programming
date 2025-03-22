#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cin>>num;
    int arr[num],B=0,C=0;
    for(int i=0;i<num;i++){
        cin>>arr[i];
        if(arr[i] < 0){
            C+=arr[i];
        }
        else{
            B+=arr[i];
        }
    }
    cout<<B-C<<endl;
    return 0;
}