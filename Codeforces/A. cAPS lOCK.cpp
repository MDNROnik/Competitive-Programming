#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int up=0,lo=0;
    for(int i=0;i<s.size();i++){
        if(isupper(s[i])){up++;}
        else{lo++;}
    }
    //cout<<lo<<endl;
    if(islower(s[0])){
        if(up == s.size()-1){
            s[0]-=32;
            cout<<s[0];
            for(int i=1;i<s.size();i++){
                s[i]+=32;
                cout<<s[i];
            }
            cout<<endl;
        }
        else if(up < s.size()-1){
            cout<<s<<endl;
        }
    }
    else{
        if(1==s.size()){
            s[0]+=32;
            cout<<s[0]<<endl;
        }
        else if(lo == s.size()-1){
            cout<<s<<endl;
        }
        else if(up<s.size()-1){
            cout<<s<<endl;
        }
        else if(up==s.size()){

            for(int i=0;i<s.size();i++){
                s[i]+=32;
                cout<<s[i];
            }
            cout<<endl;
        }

        else {
            cout<<s<<endl;
        }
    }


    return 0;
}



 