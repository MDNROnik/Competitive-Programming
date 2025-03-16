#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test;cin>>test;
    while(test--){
        ll x,y;
        cin>>x>>y;
        x--,y--;
        if(x%2!=0 && y%2==0){
            cout<<"Burenka"<<endl;
        }
        else if(x%2==0 && y%2!=0){
            cout<<"Burenka"<<endl;
        }
        else{
            cout<<"Tonya"<<endl;
        }
    }
    return 0;
}
 