#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios_base::sync_with_stdio(false);
    ll n,k;cin>>n>>k;
    string s;cin>>s;
    map<char,ll>mp;
    map<char,ll>::iterator it;
    for(int i=0;i<n;i++){
        mp[s[i]]++;
    }
    for(it=mp.begin();it!=mp.end();it++){
        if(k>=it->second){
            k-=it->second;
            it->second=0;
        }
        else if(k<it->second){
            it->second-=k;
            k=0;
        }
        if(k==0){
            break;
        }
    }
    string s2;
    for(ll i=s.size()-1;i>=0;i--){
        if(mp[s[i]]!=0){
            s2.push_back(s[i]);
            mp[s[i]]--;
        }
    }
    reverse(s2.begin(),s2.end());
    cout<<s2<<endl;

    return 0;
}