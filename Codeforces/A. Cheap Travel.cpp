#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,a,b;
    cin>>n>>m>>a>>b;
    
    if(m*a >b){
        int i=(n%m)*a;
        if(i>b){
            cout<<n/m*b + b;
        }
        else{
            cout<<n/m*b + i ;
        }
    }
    else{
        cout<<n*a<<endl;
    }
    
    return 0;
}

 