#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1,s2;
    int c=0,w=0,j;
    cin>>s1>>s2;
    j=s1.length();
    j--;
    for(int i=0;i<s1.length();i++,j--){
        if(s1[i]==s2[j]){
            c++;
        }
        else{
            w++;
        }
    }
    if(c==s1.length()){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

    return 0;
}


 