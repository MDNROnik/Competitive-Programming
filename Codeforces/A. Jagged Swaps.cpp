#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;cin>>t;
    while(t--){
        ll n;cin>>n;
        vector<int>v;
        for(int i=0;i<n;i++){
            ll a;cin>>a;
            v.push_back(a);
        }
        if(v[0]==n || v[n-1]==1 || v[0]!=1){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }

    return 0;
}


