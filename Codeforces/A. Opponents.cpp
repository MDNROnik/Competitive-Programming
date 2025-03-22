#include<bits/stdc++.h>
using namespace std;
int main(){
    int nb,no,win=0,lwin=0,count=0;
    cin>>no>>nb;
    string s;
    for(int j=0;j<nb;j++){
            cin>>s;
            for(int k=0;k<s.size();k++){
                if(s[k]=='0'){count++;break;}
            }
            if(count>0){
            win++;count=0;
            if(win>lwin){lwin=win;}
            }
            else{
                win=0;count=0;
            }
    }
    cout<<lwin<<endl;
    return 0;
}

 