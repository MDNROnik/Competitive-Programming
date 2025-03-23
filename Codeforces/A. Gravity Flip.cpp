#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cin>>num;
    int mi,temp,i,j,s=0;
	int arr[num];
	for( i=0;i<num;i++){
        cin>>arr[i];
	}
	for(i =0;i<num;i++){
        for(j=0;j<num-i-1;j++){
            if(arr[j] > arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
	}
    for(int i=0;i<num;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;


	return 0;
}