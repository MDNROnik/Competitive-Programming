#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll test;
    cin>>test;
    while(test--){
        ll n;
        cin>>n;
        string s[n],s1,s2,s3;
        map<string ,int>mp2;
        for(int i=0;i<n;i++){
            cin>>s[i];
            mp2[s[i]]=1;
        }
        ll k=0;
        map<string ,int>mp;
        for(int i=0;i<n;i++){
            string ss,ss1;ll temp=s[i].size();
            for(int j=0;j<s[i].size();j++){
                ss.push_back(s[i][j]);
                temp-=1;k++;
                ss1=s[i].substr(j+1, temp);
                //cout<<ss<<" "<<ss1<<endl;
                if(mp2[ss]==1 && mp2[ss1]==1){mp[ss+ss1]=1;}
            }
        }
        for(int i=0;i<n;i++){
            if(mp[s[i]]==1){cout<<1;}
            else{cout<<0;}
        }
        cout<<endl;//cout<<k<<endl;
    }
    return 0;
}
 