#include<bits/stdc++.h>
using namespace std;
int main(){
    int num,s=0,d=0,i,j,k=1;
    cin>>num;
    int arr[num];
    for( i=0;i<num;i++){
        cin>>arr[i];
    }
    j=num-1;
    for(i=0,k=1;k<=num;k++){
        if(k%2!=0 ){
            if(arr[i]<arr[j]){
                s+=arr[j];j--;
            }
            else{
                s+=arr[i];i++;
            }
        }
        else{
            if(arr[i]<arr[j]){
                d+=arr[j];j--;
            }
            else{
                d+=arr[i];i++;
            }
        }
    }
    cout<<s<<" "<<d<<endl;


	return 0;
}











 