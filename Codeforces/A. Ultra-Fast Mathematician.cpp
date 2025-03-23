#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,s2;
    cin>>s>>s2;
    for(int i=0;i<s.size();i++){
        if(s[i]==s2[i]){s[i]='0';}
        else{s[i]='1';}
    }
    for(int i=0;i<s.size();i++){
        cout<<s[i];
    }
    return 0;
}

 