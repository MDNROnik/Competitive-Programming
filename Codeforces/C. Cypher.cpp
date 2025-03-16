#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll test;
    cin>>test;
    while(test--){
        ll n;cin>>n;
        ll a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int time;string s;
        for(int i=0;i<n;i++){
            cin>>time>>s;
            int j=0;
            for(int j=0;j<time;j++){
                if(s[j]=='D'){
                    a[i]++;
                }
                else if(s[j]=='U'){
                    a[i]--;
                }
                if(a[i]==10){
                    a[i]=0;
                }
                if(a[i]==-1){
                    a[i]=9;
                }
            }
        }
        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
 