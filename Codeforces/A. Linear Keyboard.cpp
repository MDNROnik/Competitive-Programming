#include <bits/stdc++.h>
#include <iostream>
#include <cstring>
using namespace std;
int main(){
    string ss,s;
    int num,pre=0,now=0,i,j,count=0;
    cin>>num;
    while(num--){
        cin>>s>>ss;count=0;
        for(i=0;i<ss.size();i++){
            if(i==0){
                for(j=0;j<s.size();j++){
                    if(ss[i]==s[j]){
                        pre=j+1;break;
                    }
                 }
                 //cout<<pre<<" "<<now<<endl;
            }
            else{
                for(j=0;j<s.size();j++){
                    if(ss[i]==s[j]){
                        now=j+1;break;
                    }
                }
                //cout<<pre<<" "<<now<<endl;
                if(pre<now){
                    count=count+(now-pre);pre=now;
                }
                else if(pre>now){
                    count=count+(pre-now);pre=now;
                }
                else if(pre==now){count+=0;}
            }
       }
       //cout<<"output - "<<count<<endl;
       cout<<count<<endl;
    }

    return 0;
}

//abcdefghijklmnopqrstuvwxyz




 