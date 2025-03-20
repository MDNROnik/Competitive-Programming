#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    string s1,s2;
    cin>>s1>>s2;

    if(s[0]==s1[1] && s2[1]!=s[0]){
        cout<<"YES"<<endl;
    }
    else if(s1[1]==s2[1] ){
        if(s1[0]=='A' && s2[0] != 'A'){cout<<"YES"<<endl;}
        else if(s1[0]=='K' && s2[0] != 'A'){cout<<"YES"<<endl;}
        else if(s1[0]=='Q' && s2[0] != 'K' && s2[0] != 'A'){cout<<"YES"<<endl;}
        else if(s1[0]=='J' && s2[0] != 'Q' && s2[0] != 'K' && s2[0]!='A'){cout<<"YES"<<endl;}
        else if(s1[0]=='T' && s2[0] != 'J' && s2[0] != 'Q' && s2[0]!='K' && s2[0]!= 'A'){cout<<"YES"<<endl;}
        else if(s1[0]=='9' && s2[0] != 'T' && s2[0] != 'J' && s2[0]!='Q' && s2[0]!= 'K' && s2[0]!='A'){cout<<"YES"<<endl;}
        else if(s1[0]=='8' && s2[0] != 'Q' && s2[0] != 'K' && s2[0]!='A' && s2[0]!= '9' && s2[0]!='T' && s2[0]!='J'){cout<<"YES"<<endl;}
        else if(s1[0]=='7' && s2[0] != 'K' && s2[0] != 'A' && s2[0]!='8' && s2[0]!= '9' && s2[0]!='T' && s2[0]!='J' && s2[0]!='Q'){cout<<"YES"<<endl;}
        else if(s1[0]=='6' && s2[0] != 'A' && s2[0] != '7' && s2[0]!='8' && s2[0]!= '9' && s2[0]!='T' && s2[0]!='J' && s2[0]!='Q' && s2[0]!='K'){cout<<"YES"<<endl;}
        else {
            cout<<"NO"<<endl;
        }
    }
    else{
        cout<<"NO"<<endl;
    }

    return 0;
}