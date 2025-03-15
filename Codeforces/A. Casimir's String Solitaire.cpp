#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios_base::sync_with_stdio(false);
    ll test;cin>>test;
    while(test--){
        string s;cin>>s;
        map<char,ll>mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        if(mp.size()==1){
            cout<<"NO"<<endl;
        }
        else if(mp.size()==2){
            if(mp['A']==mp['B']){
                cout<<"YES"<<endl;
            }
            else if(mp['B']==mp['C']){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        else if(mp.size()==3){
            ll a=mp['A'],b=mp['B'],c=mp['C'];
            if((b-a)==c){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }

    return 0;
}