#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cin>>num;
    num++;

    while(1){
        int a,b,c,d;
        a=num/1000;
        b=(num/100)%10;
        c=(num/10)%10;
        d=num%10;
        if(a != b && a != c && a != d && b != c && b != d && c != d){
            break;
        }
        else{
            num++;
        }
    }
    cout<<num<<endl;

    return 0;
}

 