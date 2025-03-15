#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n,m;
    cin>>n>>m;
    vector<ll>vec;
    map<ll,ll>mp;
    map<ll,ll>::iterator it;
    for(int i=0;i<m;i++){
        ll a;cin>>a;
        //cout<<a<<endl;
        mp[a]++;
    }
    if(m==0){
        cout<<"YES"<<endl;return 0;
    }
    if(mp.find(1)!=mp.end() || mp.find(n)!=mp.end()){
        cout<<"NO"<<endl;
    }
    else{
        it=mp.begin();
        ll temp=it->first;
        it++;
        ll count=1;
        for(;it!=mp.end();it++){
            if(temp+1 == it->first){
                count++;
                temp=it->first;
            }
            else{
                count=1;
                temp=it->first;
            }
            if(count>=3){
                cout<<"NO"<<endl;
                return 0;
            }
        }
        cout<<"YES"<<endl;
    }
}