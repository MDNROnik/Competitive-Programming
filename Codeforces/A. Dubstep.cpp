#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int i=0;
    for(i =0;i<s.size();i++){
        if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B'){

        }
        else if(s[i]=='U' && s[i+1]=='B' && s[i-1]=='W'){

        }
        else if(s[i]=='B' && s[i-1]=='U' && s[i-2]=='W'){
                cout<<" ";
        }
        else{cout<<s[i];}

    }
    return 0;
}