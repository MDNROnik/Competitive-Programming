#include<bits/stdc++.h>
using namespace std;
int main(){
    int c,le;
    string s;
    cin>>c;
    while(c>0){
        c--;
        cin>>s;
        le=s.length();
        if(le<=10){
            cout<<s<<endl;
        }
        else{
            cout<<s[0]<<le-2<<s[le-1]<<endl;
        }
    }
    return 0;
}