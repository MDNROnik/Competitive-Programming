#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define fastIo() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)

int main()
{
    fastIo();
    ll k;cin>>k;
    string s;cin>>s;
    map<char,ll>mp;
    map<char,ll>::iterator it;
    map<ll,ll>m;
    for(int i=0;i<s.size();i++){
        mp[s[i]]++;
    }
    vector<ll>v;
    string str;
    for(it=mp.begin();it!=mp.end();it++){
        v.push_back(it->second);
        for(int i=1;i<=(it->second/k);i++){
            str.push_back(it->first);
        }
    }
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        if(v[i]%k==0){
            //k=v[i]/k;
        }
        else{
            cout<<"-1"<<endl;return 0;
        }
    }
    while(k--){
        cout<<str;
    }
    cout<<endl;
	return 0;
}