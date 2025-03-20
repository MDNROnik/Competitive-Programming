#include <bits/stdc++.h>
using namespace std;
int main(){
    int r,g,b;
    cin>>r>>g>>b;
    int total=30;
    r-=2;
    int rs=1,gs=0,bs=0;
    while(1){
        if(r<=0 && b<=0 && g<=0){break;}
        if(rs==0 && bs==1){
            total+=1;
            rs=1;bs=0;
            r-=2;
        }
        else if(gs==0 && rs==1 && bs==0){
            total+=1;
            gs=1;
            g-=2;
        }
        else if(gs==1 && rs==1 && bs==0){
            total+=1;
            gs=0;rs=0;
            b-=2;
            bs=1;
        }
        //cout<<total<<endl;
        //cout<<r<<" "<<g<<" "<<b<<" "<<endl;

    }
    cout<<total<<endl;
    return 0;
}