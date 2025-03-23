#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;int num=0,i,j;

    int arr[n][n];
    for( i=0;i<n;i++){
        for( j=0;j<n;j++){
            arr[i][j]=1;
        }
    }
    for( i=1;i<n;i++){
        for( j=1;j<n;j++){
            arr[i][j]=arr[i-1][j]+arr[i][j-1];
        }
    }
    for( i=0;i<n;i++){
        for( j=0;j<n;j++){
            //cout<<arr[i][j]<<" ";
            num=arr[i][j];
        }
        //cout<<endl;
    }

    cout<<num<<endl;
    return 0;
}
 