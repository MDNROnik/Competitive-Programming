#include<bits/stdc++.h>
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int test,len,count=0;
    cin>>test;
    string s;
    while(test--){
        cin>>len;
        cin>>s;count=1;
        if(len==1){
            if(s[0]==')'){cout<<"YES"<<endl;}
            else{cout<<"NO"<<endl;}
        }
        else{
            for(int i=0;i<len-1;i++){
            if(s[i]==')' && s[i+1]==')'){
                count++;
            }
            else{count=1;}
            }
            if(count>len-count){cout<<"YES"<<endl;}
            else{cout<<"NO"<<endl;}
        }
    }
    return 0;
}