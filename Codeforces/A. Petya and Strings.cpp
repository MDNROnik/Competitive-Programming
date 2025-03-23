#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,s2;
    cin>>s>>s2;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
    if(s==s2){cout<<0<<endl;}
    else if(s>s2){cout<<1<<endl;}
    else{cout<<-1<<endl;}

    return 0;
}
 