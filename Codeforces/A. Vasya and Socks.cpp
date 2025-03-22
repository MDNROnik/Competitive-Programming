#include<bits/stdc++.h>
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int num,day,total=0,re;
    cin>>num>>day;total=num; re=num/2;
    if(num<day){
        cout<<num<<endl;
    }
    else if(re<=day){
        cout<<num+(num/day)<<endl;
    }

    else{
        re=0;
        while(num!=1){
            re=num%day;
            num/=day;
            total+=num;
            //num=num+re;
            //cout<<num<<" "<<re<<" "<<total<<endl;
            if(num==1 && re==1 || num<day){total=total+((num+re)/day);break;}
            num=num+re;

        }
        cout<<total<<endl;
    }
    return 0;
}