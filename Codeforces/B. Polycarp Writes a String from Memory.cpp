#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll test;cin>>test;
    while(test--){
        string s;
        cin>>s;
        ll i=0,count=0;
        map<int,int>mp;
        while(s.size()>i){
            ll n=0;
            n=s[i];
            mp[n]++;
            if(mp.size()<=3){
            }
            else{
                count++;
                mp.clear();
                mp[n]++;
            }
            i++;
        }
        cout<<count+1<<endl;
    }

    return 0;
}