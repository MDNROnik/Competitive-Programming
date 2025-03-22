#include<bits/stdc++.h>
using namespace std;
int main(){
    int num,count=1;
    cin>>num;
    string s;
    cin>>s;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    sort(s.begin(),s.end());
    for(int i=0;i<num;i++){
        if(s[i]!=s[i+1] && i+1<num){count++;}
    }
    if(count==26){cout<<"YES"<<endl;}
    else{cout<<"NO"<<endl;}

    return 0;
}
 