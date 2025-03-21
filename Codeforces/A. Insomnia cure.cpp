#include<bits/stdc++.h>
#include <string>
#include <sstream>
using namespace std;
int main(){

    int k,l,m,n,d,count=0;
    cin>>k>>l>>m>>n>>d;
    int i,j;
    int arr[d];
    for(i=0;i<d;i++){
        arr[i]=i+1;
        if(arr[i]%k==0){
            arr[i]=0;count++;
        }
        else if(arr[i]%l==0){
            arr[i]=0;count++;
        }
        else if(arr[i]%m==0){
            arr[i]=0;count++;
        }
        else if(arr[i]%n==0){
            arr[i]=0;count++;
        }
    }
    cout<<count<<endl;

    return 0;
}



 