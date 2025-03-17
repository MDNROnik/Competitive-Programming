#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    ll test;
    cin>>test;
    while(test--){
        ll n,k,i=0;
        cin>>n>>k;
        string s;cin>>s;
        while(k--){
            ll l,r;
            cin>>l>>r;
            if(l>r){cout<<"NO"<<endl;}
            else{
                l--;r--;
                ll l2=l,r2=r+1,count=0;
                while(l2--){
                    if(s[l2]==s[l]){count++;break;}
                }
                while(r2<n){
                    if(s[r2]==s[r]){count++;break;}
                    r2++;
                }
                if(count>=1){cout<<"YES"<<endl;}
                else{cout<<"NO"<<endl;}
            }
        }
    }
    return 0;
}