#include<iostream>
using namespace std;
int main()
{
    int num,temp,n,in=0,eq=1,de=1,c=1;
    cin>>num;
    int arr[num],i;
    for( i=0;i<num;i++){
        cin>>arr[i];
    }
    for( i=1;i<num;i++){
        //cout<<arr[i-1]<<" "<<arr[i]<<endl;
        if(in==0 && arr[i-1]<arr[i]){
            c++;
        }
        else if(in==0 && arr[i-1]==arr[i]){
            in=1;
            eq=0;
        }
        else if(in==0 && arr[i-1]>arr[i]){
            in=1;
            eq=1;
            de=0;
        }
        if(eq==0 && arr[i-1]==arr[i]){
            c++;
        }
        else if(eq==0 && arr[i-1]>arr[i]){
            eq=1;
            de=0;
        }
        else if(eq==0 && arr[i-1]<arr[i]){
            break;
        }
        if(de==0 && arr[i-1]>arr[i]){
            c++;
        }
        else if(de==0 && arr[i-1]<=arr[i]){
            break;
        }
       
    }
    //cout<<i<<endl
    if(i==num){cout<<"YES"<<endl;}
    else{cout<<"NO"<<endl;}
    return 0;
}