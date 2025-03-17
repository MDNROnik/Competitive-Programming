#include <bits/stdc++.h>
using namespace std;
#define ll long long
vector<ll>arr;
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);
    ll test;
    cin>>test;
    while(test--){
        ll x;
        cin>>x;
        int c=0;
        int i=1;
        while(1){
            if((x&i)>0 &&(x^i)>0){
                cout<<i<<endl;break;
            }
            if((x&(i+1))>0 &&(x^(i+1))>0){
                cout<<i+1<<endl;break;
            }
            i*=2;
        }
    }
    return 0;
}