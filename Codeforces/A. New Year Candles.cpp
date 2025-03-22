#include<bits/stdc++.h>
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int num,make,hour=0,re=0,in=0,total=0;

    cin>>num>>make;
    hour=num;

    while(num>=make){
        re=num%make;
        hour=hour+(num/make);
        num=(num/make)+re;
        //cout<<hour<<" "<<num<<" "<<re<<endl;
    }
    //cout<<re+num<<endl;
    //cout<<hour+num<<endl;
    cout<<hour<<endl;

    return 0;
}



 