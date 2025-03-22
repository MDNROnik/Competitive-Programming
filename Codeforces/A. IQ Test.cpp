#include<bits/stdc++.h>
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int num;
    cin>>num;
    int arr[num],index,i;

    for(i=0;i<num;i++){
        cin>>arr[i];
    }


    if(arr[0]%2==0 && arr[1]%2==0){
        for(i=2;i<num;i++){
            if(arr[i]%2 != 0){
                index=i+1;cout<<index<<endl;break;
            }
        }
    }
    else if(arr[0]%2 != 0 && arr[1]%2 != 0){
        for(i=2;i<num;i++){
            if(arr[i]%2 == 0){
                index=i+1;cout<<index<<endl;break;
            }
        }
    }

    else if(arr[0]%2 != 0 && arr[1]%2 == 0){
        if(arr[2]%2==0){
            cout<<1<<endl;
        }
        else{cout<<2<<endl;}

    }
    else if(arr[0]%2 == 0 && arr[1]%2 != 0){
        if(arr[2]%2==0){
            cout<<2<<endl;
        }
        else{cout<<1<<endl;}

    }

        return 0;
}



 