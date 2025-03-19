#include <bits/stdc++.h>
using namespace std;
int main(){
    int num,count=0;
    cin>>num;
    int arr[num];
    int f=0,j=0;
    for(int i=0;i<num;i++){
        cin>>arr[i];
    }
    int x,same=0,du=0,ud=0;
    if(arr[0]<arr[1]){
        du=1;
        x=arr[1]-arr[0];
    }
    else if(arr[0]>arr[1]){
        ud=1;
        x=arr[0]-arr[1];
    }
    else{
        same=1;
        x=arr[0]-arr[1];
    }
    if(du==1){
        int n=arr[0];
        for(int i=1;i<num;i++){
            if(n+x !=arr[i]){
                count=1;break;
            }
            else{n+=x;}
        }
        if(count==1){
            cout<<arr[num-1]<<endl;
        }
        else{
            cout<<arr[num-1]+x<<endl;
        }
    }
    else if(ud==1){
        int n=arr[0];
        for(int i=1;i<num;i++){
            if(n-x !=arr[i]){
                count=1;break;
            }
            else{n-=x;}
        }
        if(count==1){
            cout<<arr[num-1]<<endl;
        }
        else{
            cout<<arr[num-1]-x<<endl;
        }
    }
    else if(same==1){
        int n=arr[0];
        for(int i=1;i<num;i++){
            if(n-x !=arr[i]){
                count=1;break;
            }
            else{n-=x;}
        }
        if(count==1){
            cout<<arr[num-1]<<endl;
        }
        else{
            cout<<arr[num-1]-x<<endl;
        }
    }


    return 0;
}