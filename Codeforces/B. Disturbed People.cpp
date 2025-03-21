#include <bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cin>>num;
    int arr[num];
    for(int i=0;i<num;i++){
        cin>>arr[i];
    }
    int count=0;
    for(int i=1;i<num;i++){
        if(arr[i]==0 && i+1!=num){
            if(arr[i+1]==1 && arr[i-1]==1){
                count++;arr[i+1]=0;arr[i-1]=0;
            }
        }
    }
    cout<<count<<endl;

    return 0;
}
 