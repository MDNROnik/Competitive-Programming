#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cin>>num;
    int arr[num],count=0;
    for(int i=0;i<num;i++){
        cin>>arr[i];
    }
    for(int i=0;i<num;i++){
        if(arr[i]!=arr[i+1]){
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}

 