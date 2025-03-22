#include<bits/stdc++.h>
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int x,y,z;
    cin>>x>>y>>z;
    int a,b,c;
    cin>>a>>b>>c;
    int count=0,i=0;


        if(x<=a){count++;a-=x;}
        else{}
        int gp=0;
        //cout<<a<<endl;

        if(y<=(a+b)){
            count++;
            if(y>=a){y-=a;a=0;}
            else{
                a-=y;y=0;
            }
            if(y>=b){y-=b;b=0;}
            else{
                b-=y;y=0;
            }
        }
        else{

        }
        if(z<=(a+b+c)){
            count++;
        }
        else{}

    if(count==3){cout<<"YES"<<endl;}
    else{cout<<"NO"<<endl;}
    return 0;
}