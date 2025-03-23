#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1,s2="hello";
    int j=0;
    cin>>s1;
    for(int i=0;i<s1.length();i++){
        if(s2[j]==s1[i]){
            if(j==5){
                break;
            }
            j++;
        }
    }
    if(j==5){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}
 