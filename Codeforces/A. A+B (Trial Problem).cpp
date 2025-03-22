#include<bits/stdc++.h>
using namespace std;
int main(){
    int test,a,b;
    cin>>test;
    while(test--){
        cin>>a>>b;
        if(a<b){
            cout<<b+a<<endl;
        }
        else if(b<0){
            cout<<a+b<<endl;
        }
        else{
            cout<<a+b<<endl;
        }
    }

    return 0;
}