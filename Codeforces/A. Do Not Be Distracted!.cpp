#include<bits/stdc++.h>
#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        int num,count=0,c2=0;
        cin>>num;
        string s;
        cin>>s;
        for(int i=0;i<num;i++){
            if(s[i]==s[i+1]){

            }
            else {
                for(int j=i+2;j<num;j++){
                    if(s[i]==s[j]){
                        c2=1;break;
                    }
                }
            }
        }
        if(c2==1){cout<<"NO"<<endl;}
        else{cout<<"YES"<<endl;}
        c2=0;
    }
    return 0;
}
 