#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios_base::sync_with_stdio(false);
    ll test;cin>>test;
    while(test--){
       ll n;cin>>n;
       vector<ll>vec;
       map<ll,ll>mp;
       for(int i=0;i<n;i++){
        ll a;cin>>a;
        vec.push_back(a);
        mp[a]++;
       }
       ll l=0;
       for(int i=0;i<n;i++){
        if(mp[vec[i]]>1){
            l=i;break;
        }
       }
       if(l==0){
        cout<<l+1<<" "<<n<<endl;
       }
       else{
        cout<<l<<" "<<n<<endl;
       }
    }

    return 0;
}