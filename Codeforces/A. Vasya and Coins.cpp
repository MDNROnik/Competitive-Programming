#include <bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        int a,b;
        cin>>a>>b;
        if(a!=0 && b!=0){
            cout<<(a)+(b*2)+1<<endl;
        }
        else if(a!=0 && b==0){
            cout<<a+1<<endl;
        }
        else if(a==0 && b!=0){
            cout<<1<<endl;
        }
        else if(a==0 && b==0){
            cout<<1<<endl;
        }
    }
    return 0;
}