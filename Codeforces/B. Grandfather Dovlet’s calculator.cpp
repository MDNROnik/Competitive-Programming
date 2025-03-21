#include <bits/stdc++.h>
using namespace std;
int main(){
    int num,num2,n,n2,total=0,num3;
    cin>>num>>num2;
    int arr[10]={6,2,5,5,4,5,6,3,7,6};

    while(num<=num2){
        num3=num;
        while(num3!=0){
            n=num3%10;
            num3/=10;
            total+=arr[n];
            //cout<<n<<" "<<arr[n]<<" "<<total<<endl;;
        }
        num++;
    }
    cout<<total<<endl;


    return 0;
}

 