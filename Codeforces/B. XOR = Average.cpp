#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios_base::sync_with_stdio(false);
    ll test;cin>>test;
    while(test--){
        ll n;cin>>n;
        if(n%2==0){
            cout<<2<<" ";

            for(int i=0;i<n-2;i++){
                cout<<4<<" ";
            }

            cout<<6<<endl;
        }
        else{
            for(int i=0;i<n;i++){
                cout<<3<<" ";
            }
            cout<<endl;
        }
    }

    return 0;
}