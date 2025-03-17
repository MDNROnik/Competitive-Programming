#include <bits/stdc++.h>
using namespace std;
#define ll long long
//vector<ll>arr;
int main(){
    ll test;
    cin>>test;
    while(test--){
        string s[8];
        for(int i=0;i<8;i++){
            cin>>s[i];
        }
        for(int i=1;i<7;i++){
            for(int j=1;j<7;j++){
                if(s[i][j]=='#'){
                    if(s[i-1][j-1]=='#' && s[i-1][j+1]=='#' && s[i+1][j-1]=='#' && s[i+1][j+1]=='#'){
                        cout<<i+1<<" "<<j+1<<endl;break;
                    }
                }
            }
        }
    }
    return 0;
}