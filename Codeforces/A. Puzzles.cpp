#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,mini=100,temp=100,i,j,k=0;
    cin>>n>>m;
    int arr[m];
    for( i=0;i<m;i++){
        cin>>arr[i];
    }
    sort(arr,arr+m);
    mini=arr[m-1];
    for(i=0;i<m;i++){
        temp=arr[i+(n-1)]-arr[i];
        //cout<<temp<<endl;
        if(mini>temp){mini=temp;}
        if((m-1)==(i+(n-1))){
            break;
        }
    }

    cout<<mini<<endl;


    return 0;
}


 