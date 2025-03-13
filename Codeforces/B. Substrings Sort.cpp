#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    map<int,vector<string>>mp;
 
    int n;cin>>n;
    while(n--){
        string s;cin>>s;
        mp[s.size()].push_back(s);
    }
    vector<string>vs;
    for(auto s:mp){
        vector<string>v=s.second;
        for(int i=0;i<v.size();i++){
            vs.push_back(v[i]);
        }
    }
    for(int i=0;i<vs.size();i++){
        //cout<<vs[i]<<endl;
    }
    //cout<<endl;
    for(int i=0;i<vs.size()-1;i++){
        int t=0,c=0,temp=1;
        for(int j=0;j<vs[i+1].size();j++){
            //cout<<vs[i][j]<<" "<<vs[i+1][j]<<endl;
            if(vs[i+1][j]==vs[i][t]){
                c++;t++;
            }
            else{
                t=0,c=0;j=temp-1;temp++;
            }
            if(c==vs[i].size()){
                break;
            }
        }
        if(c==vs[i].size()){
 
        }
        else{
            //cout<<i<<endl;
            cout<<"NO"<<endl;return 0;
        }
    }
    cout<<"YES"<<endl;
    for(int i=0;i<vs.size();i++){
        cout<<vs[i]<<endl ;
    }
 
 
 
    return 0;
}