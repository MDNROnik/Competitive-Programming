#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test;cin>>test;
    while(test--){
        ll n;cin>>n;
        string s,s2;
        cin>>s;
        ll temp=0;
        if(s[0]=='0'){
            temp=0;
        }
        else{
            temp=1;
        }
        for(int i=1;i<n;i++){
            if(temp==0){
                if(s[i]=='0'){
                    s2.push_back('+');
                }
                else{
                    s2.push_back('+');
                    temp=1;
                }
            }
            else{
                if(s[i]=='0'){
                    s2.push_back('+');
                }
                else{
                    s2.push_back('-');
                    temp=0;
                }
            }
        }
        cout<<s2<<endl;
    }
    return 0;
}