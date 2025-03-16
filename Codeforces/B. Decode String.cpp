#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test;cin>>test;
    while(test--){
        ll n;cin>>n;
        string s;cin>>s;
        string str;
        ll d=0;
        for(int i=n-1;i>=0;){
            if(d==2){
                string s2;
                s2.push_back(s[i]);
                s2.push_back(s[i+1]);
                stringstream geek(s2);
                ll x = 0;d=0;
                geek >> x;//cout<<x<<endl;
                if(x>26){i--;d=2;continue;}
                str.push_back('`'+x);
                i--;
            }
            else if(s[i]!='0'){
                ll x = s[i]-'0' ;d=0;
                str.push_back('`'+x);i--;
            }
            else if(s[i]=='0'){
                d=2;
                i-=2;
            }
        }
        //cout<<str<<endl;
        reverse(str.begin(),str.end());
        cout<<str<<endl;
    }
    return 0;
}
 