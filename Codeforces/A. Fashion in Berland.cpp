#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int z=0;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        if(a==0){z++;}
    }

    if(n==1 && z==0){
        cout<<"YES"<<endl;
    }
    else if(n==1 && z==1){
        cout<<"NO"<<endl;
    }
    else if(z==1 ){
        cout<<"YES"<<endl;
    }
    else if(z>1 || z==0){cout<<"NO"<<endl;}
    return 0;
}


 