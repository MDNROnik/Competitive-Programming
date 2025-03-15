#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios_base::sync_with_stdio(false);
    ll test;cin>>test;
    while(test--){
        ll n;cin>>n;
        string s;cin>>s;
        ll i=0;
        for(i=0;i<n;i++){
            if(s[i]=='1'){break;}
        }
        ll c=0;
        for(ll j=i+1;j<n;j++){
            if(s[j]=='0'){c++;i=j;break;}
        }
        if(c==0){
            cout<<0<<endl;
        }
        else{
            ll count=1;
            while(i<n){
                if(count%2==0){
                    if(s[i]=='1'){}
                    else if(s[i]=='0'){count++;}
                }
                else{
                    if(s[i]=='0'){}
                    else if(s[i]=='1'){count++;}
                }
                i++;
            }
            cout<<count<<endl;
        }
    }

    return 0;
}