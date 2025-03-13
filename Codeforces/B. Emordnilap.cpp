#include<bits/stdc++.h>
using namespace std;
#define ll unsigned long long int
#define mod 1000000007
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll test;cin>>test;
    while(test--){
        ll n;cin>>n;
        if(n==1){
            cout<<0<<endl;continue;
        }
        ll count=n*(n-1);
        for(int i=1;i<=n;i++){
            count=(((count%mod)*i)%mod);
        }
        cout<<count<<endl;
    }



    return 0;
}
