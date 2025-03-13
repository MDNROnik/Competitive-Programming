#include<bits/stdc++.h>
using namespace std;
#define ll long long
//ll n=1e+9;
int main(){
    ll n;cin>>n;
    map<string,vector<string>>mp;
    map<string,vector<string>>::iterator it2,it;

    for(int i=0;i<n;i++){
        string s,s2;
        cin>>s>>s2;ll c=0;
        for(it=mp.begin();it!=mp.end();it++){
            vector<string>v;
            v=it->second;
            if( v[v.size()-1] == s){
                c++;//cout<<" pre "<<endl;
                mp[it->first].push_back(s2);break;
            }
        }
        if(c==0){
            //cout<<" NEW "<<endl;
            mp[s].push_back(s2);
        }
    }
    cout<<mp.size()<<endl;
    for(it=mp.begin();it!=mp.end();it++){
        vector<string>vec=it->second;
        cout<<it->first<<" "<<vec[vec.size()-1]<<endl;
    }

    return 0;
}
