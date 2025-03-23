#include<bits/stdc++.h>
using namespace std;
int main(){
    int num,k,next=0,number=0;
    cin>>num>>k;
    int arr[num];
    for(int i=0;i<num;i++){
        cin>>arr[i];
    }
    number;
    for(int i=0;i<num;i++){
        if(arr[i]==0){

        }
        else if(arr[i]>=arr[k-1]){
            next++;
        }
    }
    cout<<next<<endl;

    return 0;
}

 