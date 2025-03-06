#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll test;
    cin>>test;
    while(test--)
    {
        ll n,m;
        cin>>n;
        vector<ll>v;
        for(int i=0;i<n;i++){
            ll a;cin>>a;
            v.push_back(a);
        }
        sort(v.begin(),v.end());
        ll count=0;

        for(ll i=0;i<n;i++){
            ll now = i+1;
            if(v[i]<=now){
                count=now;
            }
            else{

            }
        }
        cout<<count+1<<endl;
    }
}


