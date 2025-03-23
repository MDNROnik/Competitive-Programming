#include<bits/stdc++.h>
using namespace std;
int main(){
    long long arr[4],count=0,i=0,j=0;
    for( i=0;i<4;i++){
        cin>>arr[i];
    }
    for( i=0;i<4;i++){
        for(j=i+1;j<4;j++){
            if(arr[i]==arr[j]){count++;break;}
        }
    }
    cout<<count<<endl;
    return 0;
}
 