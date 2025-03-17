#include <bits/stdc++.h>
using namespace std;
#define ll long long
vector<string>arr;
int main(){
    int n;
    cin>>n;
    string s,s1,s2,s3;int i=0,t=0;
    stringstream ss;
    ss<<n;
    ss>>s;
    map<int,int>mp;
    map<int,int>::iterator it;
    int count=0;
    while(i<s.size()){
        t=s[i]-'0';
        if(t!=0){
            mp[t]++;
        }
        i++;
    }
    for(it=mp.begin();it!=mp.end();it++){
        if(n%it->first == 0){
            count+=it->second;
        }
    }

    cout<<count<<endl;


    return 0;
}