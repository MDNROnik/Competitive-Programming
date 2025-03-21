#include<bits/stdc++.h>
using namespace std;
int main(){
    int len,one=0,zero=0;
    string s;
    cin>>len>>s;
    for(int i=0;i<len;i++){
        if(s[i]=='1'){one++;}
        else{zero++;}
    }
    if(one>=zero){
        cout<<one-zero<<endl;
    }
    else{
        cout<<zero-one<<endl;
    }
}
 