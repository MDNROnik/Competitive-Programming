#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    int arr[test];
    for(int i=0;i<test;i++){
        cin>>arr[i];
    }
    sort(arr,arr+test);
    int count=0;
    for(int i=0;i<test;i++){
        if(arr[test-1]>arr[i]){
            count=count+(arr[test-1]-arr[i]);
        }
    }
    cout<<count<<endl;

    return 0;
}