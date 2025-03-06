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
        ll n;
        cin>>n;
        vector<int>v;
        ll temp = -10000000000;
        bool ok=true;
        for(int i=0;i<n;i++){
            ll a;cin>>a;

            v.push_back(a);
        }
        if(is_sorted(v.begin(),v.end())) cout<<0<<endl;
        else if(v[n-2]>v[n-1]) cout<<-1<<endl;
        else if(v[n-1]<0) cout<<-1<<endl;
        else if(v[n-2]<=v[n-1]){
            cout<<n-2<<endl;
            for(int i=0;i<n-2;i++){
                cout<<i+1<<" "<<n-2+1<<" "<<n-1+1<<endl;
            }
        }

    }

}


