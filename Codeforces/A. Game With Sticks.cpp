#include<bits/stdc++.h>
#include<list>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int arr[n];
    if(n<=m){
        if(n%2==0){
        cout<<"Malvika"<<endl;
        }
        else{
            cout<<"Akshat"<<endl;
        }
    }
    else{
        if(m%2==0){
        cout<<"Malvika"<<endl;
        }
        else{
            cout<<"Akshat"<<endl;
        }
    }

    return 0;
}