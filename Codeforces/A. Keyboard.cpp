#include<bits/stdc++.h>
#include<list>
using namespace std;
int main(){
    string s="qwertyuiopasdfghjkl;zxcvbnm,./";
    string s2,in;
    cin>>in;
    cin>>s2;
    int i,j;
    if(in[0]=='R'){
        for(i=0;i<s2.size();i++){
            for(j=0;j<s.size();j++){
                if(s[j]==s2[i]){
                    cout<<s[j-1];
                }
            }
        }
    }
    else{
        for(i=0;i<s2.size();i++){
            for(j=0;j<s.size();j++){
                if(s[j]==s2[i]){
                    cout<<s[j+1];
                }
            }
        }
    }


    return 0;
}