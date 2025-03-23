#include<bits/stdc++.h>
using namespace std;
int main(){
    int cas,i=0,m,c,mw=0,mc=0;
    cin>>cas;

    while(cas>i){
        i++;
        cin>>m>>c;
        if(m<c){mc++;}
        else if(m>c){mw++;}
    }
    if(mw==mc){cout<<"Friendship is magic!^^"<<endl;}
    else if(mw<mc){cout<<"Chris"<<endl;}
    else{cout<<"Mishka"<<endl;}

    return 0;
}


 