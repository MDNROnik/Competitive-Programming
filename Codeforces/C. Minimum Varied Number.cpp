#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test;
    cin>>test;
    while(test--){
        ll n;cin>>n;
        string s;
        ll i=9;
        while(n > 0){
            if(n>=i){
                string ss = to_string(i);
                s.push_back(ss[0]);
                n-=i;
            }
            i-=1;
        }
        for(ll i=s.size()-1;i>=0;i--){
            cout<<s[i];
        }
        cout<<endl;
    }
    return 0;
}