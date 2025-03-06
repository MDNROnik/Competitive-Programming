#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll test;cin>>test;
    while(test--){
        ll n;cin>>n;
        vector<string>v;
        for(int i=0;i<n;i++){
            string a;cin>>a;
            v.push_back(a);
        }

        int ans=1;
        queue<pair<int,int>>q;
        q.push({0,0});
        map<pair<int,int>,bool>mp;
        mp[{0,0}]=1;
        while(q.size()>0){
            int i=q.front().first;
            int j=q.front().second;
            q.pop();
            //cout<<i<<" "<<j<<endl;
            if(i-1>=0 && j+1<n && i+1<n){
                if(v[i][j]=='1' && v[i-1][j]=='0' && v[i][j+1]=='0' && v[i+1][j]=='0'){
                    ans=0;break;
                }
            }
            if(j+1<n && i+1<n){
                if(v[i][j]=='1' && v[i][j+1]=='0' && v[i+1][j]=='0'){
                    ans=0;break;
                }
            }
            /*else if(i-1>=0 && j+1<n && i+1<n){
                if(v[i][j]==1 && v[i-1][j]==0 && v[i][j+1]==0 && v[i+1][j]==0){
                    ans=0;break;
                }
            }*/

            if(i-1>=0 && mp[{i-1,j}]==0 ){
                mp[{i-1,j}]=1;
                q.push({i-1,j});
            }

            //cout<<(j+1<n)<<" "<<mp[{i,j+1}]<<" "<<v[i][j+1]<<endl;
            if(j+1<n && mp[{i,j+1}]==0 ){
                mp[{i,j+1}]=1;

                q.push({i,j+1});
            }

            if(i+1<n && mp[{i+1,j}]==0 ){

                mp[{i+1,j}]=1;
                q.push({i+1,j});
            }
        }
        if(ans){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}


