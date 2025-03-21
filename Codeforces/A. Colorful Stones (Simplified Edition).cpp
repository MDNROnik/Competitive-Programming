#include<bits/stdc++.h>
#include <string>
#include <sstream>
using namespace std;
int main(){
    string s,t;
    cin>>s>>t;
    int i,j;
    for( i=0,j=0;j<t.size();j++){
        if(s[i]==t[j]){
            i++;
        }
    }
    cout<<i+1<<endl;

    return 0;
}


 