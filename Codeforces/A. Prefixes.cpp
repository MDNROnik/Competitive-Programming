#include<bits/stdc++.h>
using namespace std;
int main(){
    int num,i,j,count=0;
    cin>>num;
    num/=2;
    string s;
    cin>>s;i=0,j=1;
    while(num--){
        if(s[i]==s[j]){
            count++;
            if(s[i]=='a' && s[j]=='a'){
                s[i]='b';
            }
            else if(s[i]=='b' && s[j]=='b'){
                s[i]='a';
            }

        }
        i+=2;j+=2;
    }
    cout<<count<<endl;
    cout<<s<<endl;

    return 0;
}



 