#include <bits/stdc++.h>
using namespace std;
int main(){
    double total=0,temp=0,t2=0,count=0;
    int num;
    cin>>num;
    double arr[num];
    for(int i=0;i<num;i++){
        cin>>arr[i];total+=arr[i];
    }
    while(total/num <4.50){
        sort(arr,arr+num);
        total+=5-arr[0];
        arr[0]=5;
        count++;
    }
    cout<<count<<endl;

    return 0;
}
 