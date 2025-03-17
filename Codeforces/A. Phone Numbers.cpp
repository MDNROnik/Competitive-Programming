#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    int test;
    cin>>test;
    string s;
    cin>>s;
    int eight=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='8'){eight++;}
    }
    int number=test/11;
    if(number<=eight){cout<<number<<endl;}
    else{cout<<eight<<endl;}
    return 0;
}