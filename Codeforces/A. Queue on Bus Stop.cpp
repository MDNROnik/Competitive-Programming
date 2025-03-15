#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n,m;
    cin>>n>>m;
    vector<ll>vec(n);
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    ll bus=0;ll temp=m;
    for(int i=0;i<n;){
        if((temp-vec[i] >= 0)){
            temp-=vec[i];i++;
        }
        else{
            bus++;
            temp=m;
        }
    }
    cout<<bus+1<<endl;

    return 0;
}