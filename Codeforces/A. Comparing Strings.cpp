#include <bits/stdc++.h>
using namespace std;
int main(){
    string s,s2;
    cin>>s>>s2;
    string s3,s4;
    s3=s2;s4=s;
    int no=0,count2=0,c;
    for(int i=0;i<s2.size();i++){
        //cout<<count(s.begin()+i, s.end(), s2[i])<<endl;
        if(s[i]==s2[i]){
            s[i]='0';
        }
        else if(s.find(s2[i])!=string :: npos ){
            s4[i]=s2[i];count2++;
            s2[i]='0';
        }
        if(count2==2){break;}
    }
    //cout<<s4<<endl;
    if(s3==s4){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}