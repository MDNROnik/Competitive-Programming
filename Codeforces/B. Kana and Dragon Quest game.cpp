#include<bits/stdc++.h>
#include <string>
#include <sstream>
using namespace std;
int main(){
    long long test,x,n,m,num,num2,num3,p=0;
    cin>>test;
    while(test--){
        cin>>x>>n>>m;
        while(n--){
            if(x<=0){
                break;
            }
            else{
                p=x;
                x/=2;
                x+=10;
            }
            if(p<=x){x=p;break;}
        }
        while(m--){
            if(x<=0){
                break;
            }
            else{
                x-=10;
            }
        }
        if(x<=0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}

 