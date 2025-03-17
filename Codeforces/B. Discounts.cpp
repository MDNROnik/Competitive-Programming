#include <bits/stdc++.h>
using namespace std;
#define ll long long
vector<ll>arr;
int main(){
    ll n,sum=0;
    cin>>n;
    vector<ll>vec(n);
    for(int i=0;i<n;i++){
        cin>>vec[i];sum+=vec[i];
    }
    sort(vec.begin(),vec.end());
    ll q;
    cin>>q;
    while(q--){
        ll bar;
        cin>>bar;
        ll index=(n-1)-bar;
        cout<<sum-vec[index+1]<<endl;
    }
    return 0;
}