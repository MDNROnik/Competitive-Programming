#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test;cin>>test;
    while(test--){
        ll n;cin>>n;
        string s;cin>>s;
        ll one=0,zero=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='0'){
                zero++;
            }
            else{
                one++;
            }
        }
 
        if(one==n){
            cout<<"DRAW"<<endl;
        }
        else{
            if(n%2==0){
                cout<<"BOB"<<endl;
            }
            else{
                if(s[n/2]=='0'){
                    if(zero==1){
                        cout<<"BOB"<<endl;
                    }
                    else{
                        cout<<"ALICE"<<endl;
                    }
                }
                else{
                    cout<<"BOB"<<endl;
                }
            }
        }
    }
 
    return 0;
}