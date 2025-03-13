#include<bits/stdc++.h>
using namespace std;
#define ll long long
//unsigned ll n = std::bitset<32>(s).to_ulong(); //for string_binary to decimal
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,l;cin>>n>>l;
    vector<ll>v;
    for(int i=0;i<n;i++){
        ll a;cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    ll count=0;
    for(int i=0;i<n-1;i++){
        ll temp=abs(v[i]-v[i+1]);
        if(temp>count){
            count=temp;
        }
    }
    double ans=count;
    ans/=2;
    ll t=0;
    ll t2=0;
    if(v[0]!=0){
        t=v[0];
    }
    if(v[v.size()-1]!=l){
        t2=abs(v[v.size()-1]-l);
    }
 
    if(ans < t){
        ans=t;
    }
    if(ans<t2){
        ans=t2;
    }
    cout << fixed << setprecision(10) << ans<<endl;;
    return 0;
}