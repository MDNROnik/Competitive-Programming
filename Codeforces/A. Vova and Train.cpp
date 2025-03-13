#include<bits/stdc++.h>
using namespace std;
#define ll long long
//ll n=1e+9;
int main(){
    ll test;cin>>test;
    while(test--){
        ll le,v,l,r;cin>>le>>v>>l>>r;
        ll count=0;
        ll t=l/v;
        t*=v;
        if(t==l){
            count+=(t/v)-1;
        }
        else{
            count+=(t/v);
        }
        t=r/v;
        le/=v;
        count+=(le-t);
        cout<<count<<endl;
    }

    return 0;
}
