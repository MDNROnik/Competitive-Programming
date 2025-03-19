#include <bits/stdc++.h>
using namespace std;
#define intl long long
int main(){
    int n;
    cin>>n;
    int arr[n],c=0,j=0;
    string s;
    cin>>s;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int nn=n;
    for(int i=0;i<n;){
        if(s[i]=='<'){
            i-=arr[i];
        }
        else{
            //cout<<"HELLO"<<endl;
            i+=arr[i];
        }
        if(i<0 || i>=n){c=1;break;}
        nn--;
        if(nn<0){break;}
    }


    if(c==1){
        cout<<"FINITE"<<endl;
    }
    else{
        cout<<"INFINITE"<<endl;
    }

    return 0;
}