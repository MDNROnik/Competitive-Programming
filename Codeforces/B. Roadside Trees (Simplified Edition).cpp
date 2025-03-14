#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;cin>>n;
    vector<ll>vec;
    for(int i=0;i<n;i++){
        ll a;cin>>a;
        vec.push_back(a);
    }
    ll pre=0,count=0;
    for(int i=0;i<n;i++){
        if(pre <= vec[i]){
            count+=(vec[i]-pre);
            count++;
            pre=vec[i];
        }
        else if(pre > vec[i]){
            count+=(pre-vec[i]);
            pre=vec[i];
            count++;
        }
        if(i!=0 && i!=n-1){
            count++;
        }
        //cout<<count<<endl;
    }
    if(n>=2){count++;}
    cout<<count<<endl;
 
    return 0;
}