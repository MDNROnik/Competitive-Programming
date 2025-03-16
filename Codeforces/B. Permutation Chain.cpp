#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test;
    cin>>test;
    while(test--){
        ll n;cin>>n;
        vector<ll>vec;
        for(ll i=0;i<n;i++){
            vec.push_back(i+1);
        }
        ll j=0;
        cout<<n<<endl;
        while(j<n){
            for(ll i=0;i<n;i++){
                cout<<vec[i]<<" ";
            }
            cout<<endl;
            j++;
            ll t=vec[j];
            vec[j]=vec[j-1];
            vec[j-1]=t;
        }
    }
    return 0;
}