#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll fun(vector<ll>&v,ll i,ll n){
    //cout<<n<<" "<<i<<endl;
    if(v.size()==i){
        if(n==0){
            return 1;
        }
        else{
            return -1;
        }
    }
    ll n1=n+v[i],n2=n-v[i];
    if(n1>=360){
        n1-=360;
    }
    if(n2<0){
        ll t=v[i]-n;
        n2=360-t;
    }
    ll res=fun(v,i+1,n1);
    if(res==1){
        return 1;
    }
    res=fun(v,i+1,n2);
    if(res==1){
        return 1;
    }
    return -1;
}
 
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;cin>>n;
    vector<ll>v;
    for(int i=0;i<n;i++){
        ll a;cin>>a;
        v.push_back(a);
    }
    ll num=v[0];
    ll res=fun(v,1,num);
    if(res==1){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
 
    return 0;
}