#include<bits/stdc++.h>
using namespace std;
int main(){
    int l=0,u=0;
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++){
        if(isupper(s[i])){
            u++;
        }
        else{
            l++;
        }
    }

    if(u<=l){
        for(int i=0;i<s.length();i++){
              if(isupper(s[i])){
              s[i] = s[i] + 32;
           }
            cout<<s[i];
        }
    }
    else{
        for(int i=0;i<s.length();i++){
              putchar(toupper(s[i]));
        }
    }

    return 0;
}



 