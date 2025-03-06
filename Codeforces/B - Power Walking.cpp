#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        map<int,int>mp;
        ll n;cin>>n;
        for(int i=0;i<n;i++){
            ll a;cin>>a;
            mp[a]++;
        }
        int a=n;
        vector<int>v;
        for(int i=1;i<=n;i++){
            v.push_back(a);
            if(a>mp.size()){a--;}
        }
        reverse(v.begin(),v.end());
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;

    }

}


