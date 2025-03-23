#include<bits/stdc++.h>
using namespace std;
int main(){
    int num,a=0,d=0;
    cin>>num;
    string s;
    cin>>s;
    for(int i=0;i<num;i++){
        if(s[i]=='A'){ a++;}
        else if(s[i]=='D'){ d++;}
    }
    if(a<d){cout<<"Danik"<<endl;}
    else if(a>d){cout<<"Anton"<<endl;}
    else{
        cout<<"Friendship"<<endl;
    }
    return 0;
}


 