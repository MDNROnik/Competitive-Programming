#include<bits/stdc++.h>
using namespace std;
#define ll long long
//ll n=1e+9;
int main(){
    ll n,m;cin>>n>>m;
    map<ll,vector<pair<ll,ll>>>mp;
    map<ll,vector<pair<ll,ll>>>::reverse_iterator it;
    ll now=0;
    while(n--){
        ll ol,nl;
        cin>>ol>>nl;
        pair<ll,ll>p;
        p=make_pair(ol,nl);
        mp[ol-nl].push_back(p);
        now+=ol;
    }
    if(now<=m){
        cout<<0<<endl;return 0;
    }
    ll count=0;
    for(it=mp.rbegin();it!=mp.rend();it++){
        vector<pair<ll,ll>>vec;
        vec=it->second;
        for(int i=0;i<vec.size();i++){
            pair<ll,ll>p;
            now-=it->first;
            count++;
            if(now<=m){
                cout<<count<<endl;return 0;
            }
        }
    }
    cout<<-1<<endl;

    return 0;
}