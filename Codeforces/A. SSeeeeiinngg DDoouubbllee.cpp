#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios_base::sync_with_stdio(false);
    ll test;cin>>test;
    while(test--){
        string s;cin>>s;
        string s1,s2;
        for(int i=0;i<s.size();i++){
            s1.push_back(s[i]);
            s2.push_back(s[i]);
        }
        reverse(s2.begin(),s2.end());
        cout<<s1<<s2<<endl;
    }

    return 0;
}