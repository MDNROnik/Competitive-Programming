#include<bits/stdc++.h>
using namespace std;
int main(){
    int num,len=1,llen=0;
    cin>>num;
    int arr[num];
    for(int i=0;i<num;i++){
        cin>>arr[i];
    }
    for(int i=0;i<num-1;i++){
        if(arr[i]<=arr[i+1]){
                len++;
                //cout<<arr[i]<<" if "<<arr[i+1]<<endl;
        }
        else{
                len=1;
                //cout<<arr[i]<<" else "<<arr[i+1]<<endl;
        }
        //cout<<arr[i]<<" "<<arr[i+1]<<" "<<len<<endl;
        if(llen<len){llen=len;}
    }
    if(llen==0){llen=len;}
    cout<<llen<<endl;

    return 0;
}



 