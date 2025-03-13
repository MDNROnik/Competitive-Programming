#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define fastIo() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;cin>>n;
    vector<ll>v;
    for(int i=0;i<n;i++){
        ll a;cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    ll sec=0;
    for(int i=0;i<n;i++){
        if(v[0]%v[i]!=0){
            sec=v[i];break;
        }
    }
    if(sec==0){
        for(int i=0;i<n-1;i++){
            if(v[i]==v[i+1]){
                sec=v[i];break;
            }
        }
    }
    cout<<v[0]<<" "<<sec<<endl;
    return 0;
}