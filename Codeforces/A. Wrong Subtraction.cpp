#include<bits/stdc++.h>
using namespace std;
int main(){
    int num1,num2;
    cin>>num1>>num2;
    while(num2!=0){
        num2--;
        if(num1%10==0){
            num1/=10;
        }
        else{
            num1-=1;
        }
    }
    cout<<num1<<endl;

    return 0;
}