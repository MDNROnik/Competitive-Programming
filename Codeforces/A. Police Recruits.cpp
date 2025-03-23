#include<bits/stdc++.h>
#include <string>
using namespace std;
int main(){
    int test,g=0,d=0,d2=0;cin>>test;
    int s[test];
    for(int i=0;i<test;i++){
        cin>>s[i];
    }
    for(int i=0;i<test;i++){
        if(s[i]== -1){
             d++;
        }
        else{
            break;
        }
    }
    for(int i=d;i<test;i++){
        if(s[i]>=1){
            g+=s[i];
        }
        else{
            if(g==0){
                d++;
            }
            else{
                g--;
            }
        }
    }
    cout<<d<<endl;

   return 0;
}







 