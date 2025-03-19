#include <bits/stdc++.h>
using namespace std;
#define intl long long
int main(){
    int test;
    cin>>test;
    while(test--){
        string s;
        cin>>s;
        int count=1,bamboo=0;
        for(int i=0;i<s.size();i++){
            if(s[i]==s[i+1]){count++;}

            else{
                if(count==1){
                    bamboo=1;break;
                }
                else{
                    count=1;
                }
            }
        }
        if(bamboo==1 || s.size()==1){cout<<"NO"<<endl;}
        else{cout<<"YES"<<endl;}
    }

    return 0;
}