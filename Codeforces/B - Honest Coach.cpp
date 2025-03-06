#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll test;cin>>test;
    while(test--){
        ll n;cin>>n;
        vector<int>v;
        for(int i=0;i<n;i++){
            ll a;cin>>a;
            v.push_back(a);
        }
        ll dif = INT_MAX;

        sort(v.begin(), v.end());
        reverse(v.begin(),v.end());

        for(int i=0;i<n-1;i++){
            ll temp = v[i]-v[i+1];
            dif = min(dif, temp);
        }

        cout<<dif<<endl;

    }
}


