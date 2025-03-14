#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n=8;
    ll c=0;
    for(int i=0;i<n;i++){
        string s;cin>>s;
        for(int i=0;i<s.size()-1;i++){
            if(s[i]==s[i+1]){
                c++;break;
            }
        }
        if(s[0]==s[s.size()-1]){
            c++;
        }
    }
    if(c==0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}