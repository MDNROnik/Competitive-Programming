#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test;cin>>test;
    while(test--){
        ll l,r,k;cin>>l>>r>>k;
        ll t;
        if(l%2 != 0 && r%2 != 0){
            t=r-l;
            t++;t/=2;t++;
        }
        else if(l%2 != 0 && r%2 == 0){
            t=r-l;
            t++;t/=2;
        }
        else if(l%2 == 0 && r%2 != 0){
            t=r-l;
            t++;t/=2;
        }
        else if(l%2 == 0 && r%2 == 0){
            t=r-l;
            t++;t/=2;
        }
        if(t==1 && l>1 && l==r){
            cout<<"YES"<<endl;
        }
        else{
            t--;
            if(t<k){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }

    return 0;
}
 