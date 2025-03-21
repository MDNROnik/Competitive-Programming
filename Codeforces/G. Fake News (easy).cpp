#include<bits/stdc++.h>
#include <string>
#include <sstream>
using namespace std;
int main(){
    string s;
    string s2="heidi";
    int i,j=0,count=0;
    cin>>s;
    for(i=0;i<s.size();i++){
        if(s2[j]==s[i]){
            count++;
            j++;
        }
        if(count==5){break;}
    }
    if(count==5 && count<s.size()){cout<<"YES"<<endl;}
    else{cout<<"NO"<<endl;}

    return 0;
}
 