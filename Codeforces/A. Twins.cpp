#include<bits/stdc++.h>
using namespace std;
int main(){

    int num,value=0,total=0,count=0,i=0;
    cin>>num;
    int arr[num];
    for(i=0;i<num;i++){
        cin>>arr[i];value+=arr[i];
    }
    sort(arr,arr+num);
    i=num-1;
    while(1){
        //cout<<total<<" "<<value<<endl;
        if(total<=value){
            total+=arr[i];
            value-=arr[i];
            count++;
            i--;

        }
        else{
            break;
        }
    }
    cout<<count<<endl;
    //cout<<value<<endl;


    return 0;
}