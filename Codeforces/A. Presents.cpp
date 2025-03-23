#include<bits/stdc++.h>
using namespace std;
int main(){
    int num,i,j,temp;
    cin>>num;
    int arr[num],arr2[num];
    for( i=0;i<num;i++){
        cin>>arr[i];
        arr2[i]=i;
    }
    for(i=0;i<num;i++)
	{
		for(j=i+1;j<num;j++)
		{
			if(arr[i]>arr[j])
			{
				temp  =arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
				temp  =arr2[i];
				arr2[i]=arr2[j];
				arr2[j]=temp;
			}
		}
	}

	for(i=0;i<num;i++){
        cout<<arr2[i]+1<<" ";
	}

    return 0;
}
 