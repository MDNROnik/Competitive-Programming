#include<bits/stdc++.h>
using namespace std;
int main(){
    long long test,carry=0,count=0;
        int num;
        cin>>num;
        string s;
        cin>>s;
        int first=0;
        for(int i=0;i<s.size();i++){
            if(i==0){
                if(s[i]=='0'){
                    s[i]='1';carry=0;count++;
                }
                else {
                    s[i]='0';carry=1;count++;
                }
            }
            else if(s[i]=='0' && carry==0){
                s[i]='0';
            }
            else if(s[i]=='0' && carry==1){
                s[i]='1';carry=0;count++;
            }
            else if(s[i]=='1' && carry==0){
                s[i]='1';
            }
            else if(s[i]=='1' && carry==1){
                s[i]='0';count++;
            }
        }
        //cout<<s<<endl;
        cout<<count<<endl;
    return 0;
}


 