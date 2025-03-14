#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test;cin>>test;
    while(test--){
        ll n;cin>>n;
        vector<ll>vec;
        ll sum=0;
        map<ll,vector<ll>>mp;
        map<ll,vector<ll>>::iterator it;
        for(int i=0;i<n;i++){
            ll a;cin>>a;
            vec.push_back(a);
            mp[a].push_back(i);
        }
        vector<ll>v,v2;
        for(it=mp.begin();it!=mp.end();it++){
            vector<ll>v3;
            v3=it->second;
            for(int i=0;i<v3.size();i++){
                v.push_back(it->first);
                v2.push_back(v3[i]);
            }
        }
        cout<<v.size()<<endl;
        ll temp=v[0];
        for(int i=1;i<v.size();i++){
            if(v[i]%temp != 0){
                ll t=v[i]/temp;
                t++;
                t=t*temp;
                v[i]=t;
                temp=max(v[i],temp);
            }
            else{
                temp=v[i];
            }
        }
        for(int i=0;i<v.size();i++){
            //cout<<v[i]<<" "<<vec[v2[i]]<<" "<<v2[i]<<endl;
            ll temp=abs(v[i]-vec[v2[i]]);
            cout<<v2[i]+1<<" "<<temp<<endl;
        }
    }
    return 0;
}