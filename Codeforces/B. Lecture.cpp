#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n,m;cin>>n>>m;
    map<string,string>mp;
    map<string,string>::iterator it;
    string s;
    while(m--){
        string s1,s2;
        cin>>s1>>s2;
        mp[s1]=s2;
    }
    while(n--){
        string s1;
        cin>>s1;
        string ss,ss2;
        ss=s1;
        ss2=mp[s1];
        if(ss.size()<=ss2.size()){
            s+=ss;
            s.push_back(' ');
        }
        else if(ss.size() > ss2.size()){
            s+=ss2;
            s.push_back(' ');
        }
    }
    cout<<s<<endl;

    return 0;
}