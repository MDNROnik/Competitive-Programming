#include <bits/stdc++.h>
using namespace std;
#define intl long long
int main(){
    int test;
    cin>>test;
    string s[test];
    for(int i=0;i<test;i++){
        cin>>s[i];
        int a=0,b=0;
        for(int j=0;j<6;j++){
            if(j<3){
                a+=s[i][j];
            }
            else{
                b+=s[i][j];
            }
        }
        if(a==b){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}