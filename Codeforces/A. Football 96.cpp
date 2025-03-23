#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int count=0;

    for(int i=0;i<s.length();i++){
        if(s[i]=='0'){
            if(s[i-1]!='0'){
                count=1;
            }
            else{count++;}

            if(count==7){
                break;
            }
        }
        else{
            if(s[i-1]!='1'){
                count=1;
            }
            else{count++;}
            if(count==7){
                break;
            }
        }
    }
    if(count==7){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }


    return 0;
}

 