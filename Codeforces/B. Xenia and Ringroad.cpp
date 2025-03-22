#include<bits/stdc++.h>
#include<list>
using namespace std;
int main(){
    long long house,work,mov=0;
    cin>>house>>work;
    long long arr[work],arr2[work],i,j=0,h1=0,h2=0,h3=0;
    for( i=0;i<work;i++){
        cin>>arr[i];
    }

    h1=arr[0];
    while(work--){
        if(j==0){mov+=arr[j]-1;}
        else if(arr[j-1]<arr[j]){
            mov+=arr[j]-arr[j-1];
        }
        else if(arr[j-1]>arr[j]){
            mov+=(house-arr[j-1])+arr[j];
        }
        j++;
        //cout<<mov<<" "<<arr[j]<<endl;
    }



    cout<<mov<<endl;

    return 0;
}