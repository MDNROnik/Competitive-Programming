#include <bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cin>>num;
    int arr[7],i=0;
    for( i=0;i<7;i++){
        cin>>arr[i];
    }
    i=0;
    while(1){
        num-=arr[i];
        //cout<<num<<" "<<i<<endl;
        if(num<=0){
            cout<<i+1<<endl;break;
        }
        if(i==6){i=0;}
        else{i++;}
    }

    return 0;
}