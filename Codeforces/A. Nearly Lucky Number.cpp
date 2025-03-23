#include<bits/stdc++.h>
using namespace std;
int main(){
    long long num,n=0,count=0;
    cin>> num;
    while(num>00){
        n=num%10;
        if(n==4 || n==7){count++;}
        num=num/10;
    }
    if(count==4 || count==7){cout<<"YES"<<endl;}
    else{cout<<"NO"<<endl;}
    return 0;
}
 