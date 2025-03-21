#include<bits/stdc++.h>
#include <string>
#include <sstream>
using namespace std;
int main(){
    long long test=0,count=0,num;
    cin>>num;
    while(1!=num){
        test+=num%2;
        num/=2;
    }
    cout<<1+test<<endl;

    return 0;
}




 