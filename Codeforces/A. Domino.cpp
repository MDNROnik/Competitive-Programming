#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int first=0,second=0,odd1=0,odd2=0;
    int arr[n][2];
    for(int i=0;i<n;i++){
        for(int j=0;j<2;j++){
            cin>>arr[i][j];
            if(j==0){
                first+=arr[i][j];
                odd1+=1;
            }
            else{
                second+=arr[i][j];
                odd2+=1;
            }
        }
    }
    /*for(int i=0;i<n;i++){
        for(int j=0;j<2;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }*/

    //cout<<first<<" "<<second<<endl;

    int i=0,c=0;
    if(first%2==0 && second%2==0){
        cout<<0<<endl;c=1;
    }
    else{
        for( i=0;i<n;i++){
            first-=arr[i][0];second-=arr[i][1];
            first+=arr[i][1];second+=arr[i][0];
            if(first%2==0  && second%2==0){
                cout<<1<<endl;c=1;break;
            }
            else{
                first-=arr[i][1];second-=arr[i][0];
                first+=arr[i][0];second+=arr[i][1];
            }
        }
    }
    if(c==0){
        cout<<-1<<endl;
    }


    return 0;
}