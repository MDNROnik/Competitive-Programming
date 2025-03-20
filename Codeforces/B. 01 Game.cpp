#include <bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
    
    string s;
    cin>>s;
    int i,one=0,zero=0;
    for(i=0;i<s.size();i++){
        if(s[i]=='1'){one++;}
        else{zero++;}
    }
    if(one<=zero){
        one=one;
    }
    else{
        one=zero;
    }
    if(one%2==00){cout<<"NET"<<endl;}
    else{cout<<"DA"<<endl;}
    }
    
    return 0;
}