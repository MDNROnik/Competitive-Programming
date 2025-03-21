#include<bits/stdc++.h>
#include <string>
#include <sstream>
using namespace std;
int main(){
    long long test,count=0,num;
    cin>>test;
    while(test--){
        cin>>num;count=0;
        if(num==1 || num==0){cout<<0<<endl;}
        else{
            //cout<<2<<endl;
            while(num!=1){
                //cout<<22<<endl;
                if(num%6==00){
                    num/=6;count++;
                }
                else{
                    num*=2;count++;
                    if(num<6){count=0;break;}
                }
                //cout<<num<<endl;
            }
            if(count==0){cout<<-1<<endl;}
            else{cout<<count<<endl;}
        }
    }
    return 0;
}




 