#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define mod 1000000007

int main(){
    ios_base::sync_with_stdio(false);

    ll test;cin>>test;
    while(test--){
        ll n;cin>>n;
        vector<ll>vec;
        if(n%2==0){
            ll mid=n/2;
            ll t=mid;
            while(mid--){
                vec.push_back(t--);vec.push_back(n--);
            }
        }
        else{
            ll mid=n/2;
            ll t=mid+1;
            while(mid--){
                vec.push_back(t--);vec.push_back(n--);
            }
            vec.push_back(t);
        }
        for(int i=0;i<vec.size();i++){
            cout<<vec[i]<<" ";
        }
        cout<<endl;
    }
}