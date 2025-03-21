#include<bits/stdc++.h>
#include <string>
#include <sstream>
using namespace std;
int main(){
    int test;
    string s;
    cin>>test;
    char c[1];
    while(test--){
        cin>>s;
        for(int i=2;i<s.size();i++){
            if(s[i-1]==s[i]){
                s[i]='0';
            }
        }
        for(int i=0;i<s.size();i++){
            if(s[i]!='0'){
                cout<<s[i];
            }
        }
        cout<<endl;
    }
    return 0;
}

 