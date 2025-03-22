#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    int i=s.size()/2;
    int j=s.size();
    if(j==1){cout<<s[i]<<endl;}
    else{
        for(;i<j;i++){
            if(i+1==j){
                cout<<s[i]<<endl;
            }
            else{
                cout<<s[i]<<"+";
            }
        }
    }

    return 0;
}

 