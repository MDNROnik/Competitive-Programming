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
        ll n;cin>>n;
        ll ans=0,sum=0;
        for(int i=0;i<n;i++){
            ll a;cin>>a;
            sum+=a;
        }
        ll remainder=sum%n;
        ll count=n-remainder;
        remainder*=count;

        cout<<remainder<<endl;

    }

}


