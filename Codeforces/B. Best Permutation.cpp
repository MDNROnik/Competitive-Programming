#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test;cin>>test;
    while(test--){
        ll n;cin>>n;
        vector<ll>vec;
        map<ll,ll>mp;
        ll n2=n-3;
        if(n2%2 != 0){
            mp[1]++;mp[n]++;mp[n-1]++;
            for(int i=n;i>=1;i--){
                if(mp[i] != 1){
                    vec.push_back(i);
                }
            }
            vec.push_back(1);
            vec.push_back(n-1);
            vec.push_back(n);
            for(int i=0;i<n;i++){
                cout<<vec[i]<<" ";
            }
            cout<<endl;
        }
        else{
            mp[1]++;mp[n]++;mp[n-1]++;mp[n-2]++;
            for(int i=n;i>=1;i--){
                if(mp[i] != 1){
                    vec.push_back(i);
                }
            }
            vec.push_back(n-2);
            vec.push_back(1);
            vec.push_back(n-1);
            vec.push_back(n);
            for(int i=0;i<n;i++){
                cout<<vec[i]<<" ";
            }
            cout<<endl;
        }

    }
    return 0;
}
 