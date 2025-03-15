#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios_base::sync_with_stdio(false);
    ll test;cin>>test;
    while(test--){
        string s;
        cin>>s;
        ll count=0;
        for(int i=0;i<s.size()-1;i++){
            if(s[i]=='Y' && s[i+1]!='e'){
                count++;break;
            }
            else if(s[i]=='e' && s[i+1]!='s'){
                count++;break;
            }
            else if(s[i]=='s' && s[i+1]!='Y'){
                count++;break;
            }
            else if(s[0]!='Y' && s[0]!='e' && s[0]!='s'){
                count++;
            }
        }
        if(s.size()==1){
            if(s[0]!='Y' && s[0]!='e' && s[0]!='s'){
                count++;
            }
        }

        if(count==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}