#include <bits/stdc++.h>
using namespace std;
int main(){
    int i,a,n,j=0,total=0;
    cin>>a>>n;
    int arr[a];
    for(int i=1;i<=a;i++){
        cin>>arr[i];
    }
    i=1;
    if(arr[n]==1){
        total++;
    }
    while(1){
        j+=1;
        if((n-j)<=0 && (n+j)>a){
            break;
        }

        if((n-j)<=0 && arr[n+j]==1 && (n+j)<=a){
            total++;
            //cout<<n-j<<" "<<n+j<<" "<<total<<endl;
            //cout<<n-j<<" "<<n+j<<" "<<arr[n+j]<<" "<<total<<endl;
        }
        else if((n+j)>a && arr[n-j]==1 && (n-j)>0){
            total++;
        }

        if(arr[n-j]==1 && arr[n+j]==1 && (n+j)<=a && (n-j)>0){
            total+=2;//cout<<arr[n-j]<<" "<<arr[n+j]<<endl;
            //cout<<arr[n-j]<<" hello "<<arr[n+j]<<endl;
        }
        else if(arr[n-j]==0 && arr[n+j]==1){
            total;
        }
        else if(arr[n+j]==0 && arr[n-j]==1){
            total;
        }

    }
    /*for(int i=1;i<=a;i++){
        cout<<i<<" "<<arr[i]<<endl;
    }*/

    cout<<total<<endl;
    return 0;
}