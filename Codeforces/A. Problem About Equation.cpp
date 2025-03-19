#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,c=0;
    double b;
    cin>>n>>b;
    double arr[n];
    double total=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        total+=arr[i];
    }
    total+=b;
    double t=total/n;
    for(int i=0;i<n;i++){
        double temp=t-arr[i];

        if(temp>=0.000000){
            c++;
            arr[i]=t-arr[i];
            b-=temp;

        }
    }
    if(c==n){
        for(int i=0;i<n;i++){
            printf("%.6lf",arr[i]);cout<<endl;
        }
    }
    else{
        cout<<-1<<endl;

    }
    return 0;

}