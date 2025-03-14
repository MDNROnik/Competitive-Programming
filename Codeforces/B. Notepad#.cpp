#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test;cin>>test;
    while(test--){
        ll n;cin>>n;
        string s;cin>>s;
        map<char,vector<ll>>mp;
        map<char,vector<ll>>::iterator it;
        for(int i=0;i<n;i++){
            mp[s[i]].push_back(i);
        }
        ll count=0;
        for(it=mp.begin();it!=mp.end();it++){
            vector<ll>vec;
            vec=it->second;
            for(int i=0;i<vec.size();i++){
                for(int j=i+1;j<vec.size();j++){
                    if(s[vec[i]+1]==s[vec[j]+1] && vec[i]+1 < vec[j]){
                        count++;break;
                    }
                }
                if(count==1){
                    break;
                }
            }
            if(count==1){
                break;
            }
        }
        if(count==1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}