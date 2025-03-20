#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int n=s.size(),i;
    for(i=0;i<s.size();){
        if(s[i]=='1' && s[i+1]!='4'){s[i]='0';i+=1;}
        else if(s[i]=='1' && s[i+1]=='4' && s[i+2]!='4'){s[i]='0';s[i+1]='0';i+=2;}
        else if(s[i]=='1' && s[i+1]=='4' && s[i+2]=='4'){s[i]='0';s[i+1]='0';s[i+2]='4';i+=3;}
        else {break;}
    }
    //cout<<s<<endl;
    //cout<<i<<endl;
    if(s.size()==i){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}
 