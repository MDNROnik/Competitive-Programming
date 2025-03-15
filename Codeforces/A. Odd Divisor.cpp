#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios_base::sync_with_stdio(false);
    ll test;cin>>test;
    while(test--){
        ll n;cin>>n;int count=0;
        if(n%2!=0){cout<<"YES"<<endl;continue;}
        while(n!=1){
            if(n%2==0 && (n/2)%2!=0 && (n/2)>1){
                cout<<"YES"<<endl;count++;break;
            }
            n/=2;
        }
        if(count==0){
            cout<<"NO"<<endl;
        }
    }

    return 0;
}