#include<bits/stdc++.h>
#include <string>
#include <sstream>
using namespace std;
int main(){
    string s,t1,t2,t3;
    int num;
    cin>>num;
    cin>>s;
    t1=s;
    t2=s;
    int a=1,b=0,i,j,c=0;
    num-=1;
    while(num--){
        cin>>s;
        if(s==t1){a++;}
        else if(s!=t1){b++;
            if(c==0){
                c++;
                t3=s;
            }
        }
        else if(s==t3){
            b++;
        }

    }
    //cout<<a<<" "<<b<<endl;
    if(a>b){cout<<t2<<endl;}
    else{cout<<t3<<endl;}

    return 0;
}




 