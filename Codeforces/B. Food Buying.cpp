#include<bits/stdc++.h>
#include <string>
#include <sstream>
using namespace std;
int main(){
    long long test,num,total=0,n=0,n2=0;
    cin>>test;
    while(test--){
        cin>>num;
        total+=num;
        while(num>=10){
            n=num/10;
            total+=n;
            n2=num%10;
            num=n+n2;
            //cout<<num<<" "<<n<<" "<<n2<<endl;
        }
        cout<<total<<endl;total=0;
    }
    return 0;
}