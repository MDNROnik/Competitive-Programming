#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios_base::sync_with_stdio(false);
    ll test;cin>>test;
    while(test--){
        ll n;cin>>n;
        vector<ll>a(n+1),b(n+1);ll c=0,in=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
            if(b[i]>a[i] && c==0){
                c=b[i]-a[i];in=i;
            }
        }
        while(a[in]<b[in]){
            a[in]+=c;in++;
        }
        c=0;
        for(int i=0;i<n;i++){
            if(b[i]==a[i]){

            }
            else{
                c++;break;
            }
        }
        if(c==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}