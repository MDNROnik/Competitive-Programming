#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n=1e+9;
int main(){
    ll n;cin>>n;
    vector<ll>vec,v;
    ll count=0;
    ll nega=0;
    for(int i=0;i<n;i++){
        ll a;cin>>a;
        v.push_back(a);
    }
    for(int i=0;i<n;i++){
        if(v[i]<0){
            nega++;
        }
        count++;
        if(nega>=3 ){
            count--;
            vec.push_back(count);
            count=0;
            nega=0;
            i--;
        }
    }
    if(nega!=0 || count!=0){
        vec.push_back(count);
    }
 
    cout<<vec.size()<<endl;
    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<" ";
    }
    cout<<endl;
    return 0;
}