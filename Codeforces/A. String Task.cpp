#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1;
    int num=0;
    char c;
    cin>>s1;
    for(int i=0;i<s1.length();i++){
        if(s1[i]=='a'||s1[i]=='o'||s1[i]=='y'||s1[i]=='e'||s1[i]=='u'||s1[i]=='i'||s1[i]=='A'||s1[i]=='O'||s1[i]=='Y'||s1[i]=='E'||s1[i]=='U'||s1[i]=='I' && num<1){
        }
        else{
            c=s1[i];
            cout<<"."<<(char) tolower(c) ;
            num=0;
        }

    }
    cout<<endl;

    return 0;
}



 