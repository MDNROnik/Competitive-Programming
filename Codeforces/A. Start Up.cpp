#include<bits/stdc++.h>
using namespace std;
int main(){
string s;cin>>s;
    int count=0,i=0,j=0,count2=0;
    string s2=s;
    for(i=0,j=s.size()-1;i<s.size();i++,j--){
        if(s[i]==s[j]){
            count+=1;
        }
    }
    if(count==s.size()){
        for(int i=0;i<s.size();i++){
            if(s[i]=='A' || s[i]=='H' ||s[i]=='I' ||s[i]=='M' ||s[i]=='O' ||s[i]=='T' ||s[i]=='U' ||s[i]=='V' ||s[i]=='W' ||s[i]=='X' ||s[i]=='Y' ){
                count2++;
            }
            else{
                break;
            }
        }
        if(count2==s.size()){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    else{
        cout<<"NO"<<endl;
    }

    return 0;
}