#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    int c=0;
    cin>>s;
    for(int i=0;i<s.length();i++){
        if(s[i]=='H'){cout<<"YES"<<endl;break;}
        else if(s[i]=='Q'){cout<<"YES"<<endl;break;}
        else if(s[i]=='9'){cout<<"YES"<<endl;break;}
        else{
            c++;
        }
    }
    if(c==s.length()){
        cout<<"NO"<<endl;
    }
    return 0;
}
 