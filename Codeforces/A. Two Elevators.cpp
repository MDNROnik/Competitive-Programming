#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test;cin>>test;
    while(test--){
        ll a,b,c;cin>>a>>b>>c;
        ll x=a-1;
        ll y=0;
        if(b==c){
            y=b-1;
        }
        else if(b<c){
            ll t=c-b;
            y=c-1;
            y+=t;
        }
        else if(b>c){
            y=b-1;
        }
        if(x==y){
            cout<<3<<endl;
        }
        else if(x<y){
            cout<<1<<endl;
        }
        else{
            cout<<2<<endl;
        }
    }
    return 0;
}
 