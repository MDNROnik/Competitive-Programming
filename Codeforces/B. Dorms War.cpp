#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    ll test;cin>>test;
    while(test--){
        map<char,set<ll>>mp;
        ll n;cin>>n;
        string s;cin>>s;
        for(int i=0;i<n;i++){
            mp[s[i]].insert(i+1);
        }
        ll n2;cin>>n2;
        set<ll>v;v.insert(1);
        set<ll>::iterator it,it2;
        while(n2--){
            char c;cin>>c;
            if(mp[c].size()>0){
                set<ll>vec;
                vec=mp[c];
                v.insert(vec.begin(),vec.end());
            }
        }
        ll maxx=0;
        it=v.begin();
        it2=v.begin();
        it2++;
        for(;it2!=v.end();){
            ll t=*it;
            ll t2=*it2;
            ll temp=abs( t - t2  );
            if(temp>maxx){
                maxx=temp;
            }
            it++;it2++;
        }
        cout<<maxx<<endl;
    }
    return 0;
}