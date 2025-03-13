#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;cin>>s;
    vector<ll>vec;
    vec.push_back(0);
    ll c=0;
    for(int i=1;i<s.size();i++){
        if(s[i-1]==s[i]){
            c++;
        }
        vec.push_back(c);
    }
    ll q;cin>>q;
    while(q--){
        ll i,j;
        cin>>i>>j;
        i--;j--;
        cout<<abs(vec[i]-vec[j])<<endl;
    }
 
    return 0;
}