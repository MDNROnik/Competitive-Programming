#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    string s1,s2,s3;cin>>s1>>s2;
    ll c=0;
    for(int i=0;i<s1.size();i++){
        if(s1[i]<s2[i]){
            c++;break;
        }
    }
    if(c==1){
        cout<<-1<<endl;
    }
    else {
        for(int i=0;i<s1.size();i++){
            if(s1[i]==s2[i]){
                s3.push_back(s1[i]);
            }
            else if(s1[i]>s2[i]){
                s3.push_back(s2[i]);
            }
        }
        if(c==0){
            cout<<s3<<endl;
        }

    }
}