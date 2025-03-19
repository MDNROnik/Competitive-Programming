#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int mini=0;mini+=15;
    for(int i=0;i<n;i++){
        //cout<<mini<<endl;
        if(arr[i]<=mini){
            mini=arr[i]+15;
        }
        else{
            break;
        }
    }
    /*if((mini+15)>=90){
        mini=90;
    }*/
    if(mini>90){mini=90;}
    cout<<mini<<endl;

    return 0;
}
 