#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastIo() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
int main()
{
    fastIo();
    ll n;cin>>n;
    vector<ll>v,v2,v3;
    for(int i=0;i<n;i++){
        ll a;cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n-1;i++){
        ll a;cin>>a;
        v2.push_back(a);
    }
    sort(v2.begin(),v2.end());
    ll c=0;
    ll first=0;
    for(int i=0;i<n-1;i++){
        if(v[i]!=v2[i]){
            //cout<<v[i]<<" "<<v2[i]<<endl;
            first=v[i];c++;break;
        }
    }
    if(c==0){
        first=v[n-1];
    }
    for(int i=0;i<n-2;i++){
        ll a;cin>>a;
        v3.push_back(a);
    }
    sort(v3.begin(),v3.end());
    c=0;
    ll second=0;
    for(int i=0;i<n-2;i++){
        if(v2[i]!=v3[i]){
            second=v2[i];c++;break;
        }
    }
    //cout<<v2[n-1]<<endl;
    if(c==0 ){
        second=v2[n-2];
    }

    cout<<first<<endl<<second<<endl;
    return 0;
}