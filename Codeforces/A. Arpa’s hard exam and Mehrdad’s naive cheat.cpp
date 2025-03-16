#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;cin>>n;
    ll mod=1000000000;
    ll res=1;
    ll base=1378;
    while(n){
        if(n%2==1){
            res=(res*base)%mod;
            n--;
        }
        else{
            base=(base*base)%10;
            n/=2;
        }
    }
    //cout<<res<<endl;
    cout<<res%10<<endl;

    return 0;
}