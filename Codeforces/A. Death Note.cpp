#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n,m;
    cin>>n>>m;
    long long arr[n];
    int a,count=0;
    for(int i=0;i<n;i++){
        cin>>a;
        count+=a;
        if(count<m){
            cout<<0<<endl;
        }
        else{
            int c=count;
            cout<<c/m<<endl;
            count=0;
            count=c%m;
        }
    }
    return 0;
}


 