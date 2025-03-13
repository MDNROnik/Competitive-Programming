#include<bits/stdc++.h>
using namespace std;
#define ll long long
//unsigned ll n = std::bitset<32>(s).to_ulong(); //for string_binary to decimal
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    string s;cin>>s;
    cout<<s;
    reverse(s.begin(),s.end());
    cout<<s<<endl;
    return 0;
}