#include<bits/stdc++.h>
using namespace std;
int main(){
    int num,s=0,f=0;
    string st;
    cin>>num>>st;
    for(int i=0;i<num-1;i++){
        if(st[i]=='S' && st[i+1]=='F'){
            s++;
        }
        else if(st[i]=='F' && st[i+1]=='S'){
            f++;
        }
    }
    if(s>f){cout<<"YES"<<endl;}
    else {cout<<"NO"<<endl;}



    return 0;
}
 