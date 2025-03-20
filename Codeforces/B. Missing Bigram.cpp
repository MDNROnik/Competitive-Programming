#include <bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        string s,s2;
        int num,num2,i=0;
        cin>>num;
        num2=num-2;
        while(num2--){
            cin>>s2;
            if(i==0){
                i++;
                s=s+s2;
            }
            else{
                if(s[s.size()-1]==s2[0]){
                    s=s+s2[1];
                }
                else{
                    s=s+s2;
                }
            }
        }
        if(s.size()<num){
            while(s.size()!=num){
                s=s+'a';
            }
        }
        cout<<s<<endl;
    }
    return 0;
}
 