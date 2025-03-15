#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios_base::sync_with_stdio(false);
    ll test;cin>>test;
    while(test--){
        ll n0,n1,n2;cin>>n0>>n1>>n2;
        string s;
        if(n0>0){
            s.push_back('0');
            s.push_back('0');
            n0--;
        }
        while(n0--){
            s.push_back('0');
        }
        while(n1--){
            if(s.size()==0){
                s.push_back('0');
                s.push_back('1');
            }
            else if(s[s.size()-1] =='0'){
                s.push_back('1');
            }
            else{
                s.push_back('0');
            }
        }
        ll c=0;
        if(s.size()>0 && s[s.size()-1]=='0' && s[s.size()-2]=='1' && n2!=0){
            s[s.size()-1]='1';
            n2+=1;
            n2-=2;c++;
        }
        while(n2--){
            if(s.size()==0){
                s.push_back('1');
                s.push_back('1');continue;
            }
            if(s[s.size()-1]=='1'){
                s.push_back('1');
            }
            else{
                s.push_back('1');
                s.push_back('1');
            }
        }
        if(c!=0){
            s.push_back('0');
        }
        cout<<s<<endl;
    }

    return 0;
}