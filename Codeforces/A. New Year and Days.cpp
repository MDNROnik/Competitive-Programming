#include <bits/stdc++.h>
using namespace std;
int main(){
    int num,n=0;
    string s,s2;
    getline(cin,s);
    if(isspace(s[1])){
        num=s[0]-'0';
    }
    else{
        n=s[0]-'0';
        num=n*10;
        num+=s[1]-'0';
    }
    //cout<<num<<endl;
    if(s[5]=='w'){
        n=52*7;
        n=366-n;
        if(7==num){
            cout<<52<<endl;
        }
        else if(7-num<=n){
            cout<<52+1<<endl;
        }
        else{
            cout<<52<<endl;
        }
    }
    else{
        if(num<=29){cout<<12<<endl;}
        else if(num==30){cout<<11<<endl;}
        else{cout<<7<<endl;}
    }

    return 0;
}
 