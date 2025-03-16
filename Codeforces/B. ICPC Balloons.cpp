#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll test;
    cin>>test;
    while(test--){
        ll n;cin>>n;
        string s;
        cin>>s;
        map<int,int>mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]]=1;
        }
        cout<<s.size()+mp.size()<<endl;
    }
    return 0;
}
 