#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;cin>>s;
    map<string,int>mp;
    mp[s];
    for(int i=0;i<s.size();i++){
        //cout<<s<<endl;
        string ss;
        ss=s[s.size()-1];
        s.erase(s.size()-1,1);
        reverse(s.begin(),s.end());
        s.push_back(ss[0]);
        reverse(s.begin(),s.end());
        mp[s];

    }

    cout<<mp.size()<<endl;


    return 0;
}