#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios_base::sync_with_stdio(false);
    ll test;cin>>test;
    while(test--){
        ll n;cin>>n;
        ll a,b;
        ll maxx=0,total=0,total2=0;
        for(int i=0;i<n;i++){
            cin>>a;
            total+=a;
        }
        for(int i=0;i<n;i++){
            cin>>b;
            if(maxx<b){
                maxx=b;
            }
            total+=b;
        }
        cout<<total-maxx<<endl;
    }
}