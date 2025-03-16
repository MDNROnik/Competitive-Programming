#include <bits/stdc++.h>
using namespace std;
#define ll long long
vector<string >sv;

int main(){
    ios_base::sync_with_stdio(false);
    ll test;cin>>test;
    while(test--){
        ll n;
        cin>>n;
        vector<ll>vec;
        ll s=1000000000;
        for(int i=0;i<n;i++){
            ll a;cin>>a;
            vec.push_back(a);
            if(s>a){
                s=a;
            }
        }
        ll count=0;ll t=s*2;t--;
        for(int i=0;i<n;i++){
            if((s*2)>vec[i]){
            }
            else{
                if(vec[i]%t==0){
                    count+=(vec[i]/t);count--;
                }
                else{
                    count+=(vec[i]/t);
                }
            }
        }
        cout<<count<<endl;
    }
}