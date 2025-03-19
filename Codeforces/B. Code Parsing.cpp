#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int x=0,y=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='x'){x++;}
        else{y++;}
    }
    //cout<<x<<" "<<y<<endl;
    if(x==y){
        cout<<endl;
    }
    else if(x<y){
        for(;x<y;x++){
            cout<<"y";
        }
    }
    else{
        for(;y<x;y++){
            cout<<"x";
        }
    }
    return 0;
}

 