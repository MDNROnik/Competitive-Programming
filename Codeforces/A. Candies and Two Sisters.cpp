#include<bits/stdc++.h>
using namespace std;
int main(){
    long long test,i=0,num,a,b,count=0;
    cin>>test;
    while(test--){
        count=0;
        cin>>num;
        if(num<3){cout<<0<<endl;}
        else if(num%2 != 0){cout<<num/2<<endl;}
        else{
            cout<<(num/2)-1<<endl;
        }
    }
    return 0;
}


 