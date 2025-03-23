#include<bits/stdc++.h>
using namespace std;
int main(){
    int num,n,count=1;
    cin>>num>>n;
    string s;
    cin>>s;

    while(n>0){
        for(int i=0;i<num;){
        if(s[i]=='B' && s[i+1]=='G'){
            s[i]='G';s[i+1]='B';i=i+2;
        }
        else{i++;}
      }n--;
    }
    for(int i=0;i<num;i++){
        cout<<s[i];
    }
    return 0;
}
 