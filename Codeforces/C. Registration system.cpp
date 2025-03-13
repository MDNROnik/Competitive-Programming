#include<bits/stdc++.h>
using namespace std;
#define ll long long
//unsigned ll n = std::bitset<32>(s).to_ulong(); //for string_binary to decimal
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    ll test;cin>>test;
    map<string,ll>mp;
    while(test--){
         string s;cin>>s;
         if(mp[s]==0){
            mp[s]++;
            cout<<"OK"<<endl;
         }
         else{
            stringstream str1;
            str1<<mp[s];
            mp[s]++;
            string s2=str1.str();
            s+=s2;
            cout<<s<<endl;
            mp[s]++;
         }
    }
 
    return 0;
}