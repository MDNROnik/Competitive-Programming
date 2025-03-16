#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;cin>>n;
    ll res=(n*(n+1))/2;
    if(res%2==0){
        cout<<0<<endl;
    }
    else{
        cout<<1<<endl;
    }
    return 0;
}