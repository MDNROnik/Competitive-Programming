#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,k;cin>>n>>k;
    string s;cin>>s;
    ll t=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='#'){
           t++;
        }
        else{
            t=0;
        }
        if(t==k){
            cout<<"NO"<<endl;return 0;
        }
    }
    cout<<"YES"<<endl;

    return 0;
}
 