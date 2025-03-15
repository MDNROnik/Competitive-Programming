#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios_base::sync_with_stdio(false);
    ll test;cin>>test;
    while(test--){
        ll n;cin>>n;
        string s;cin>>s;
        ll maxx=0;
        for(int i=0;i<s.size();i++){
            ll temp=s[i];
            if(maxx<temp){
                maxx=temp;
            }
        }
        cout<<maxx-96<<endl;
    }
    return 0;
}