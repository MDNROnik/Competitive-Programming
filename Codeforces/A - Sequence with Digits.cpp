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
        ll n,k;cin>>n>>k;

        while(--k){
            ll mi=INT_MAX;
            ll mx=INT_MIN;
            ll x=n;
            while(x){
                ll temp=x%10;
                x/=10;
                mi=min(mi,temp);
                mx=max(mx,temp);
            }
            if(mi==0 || mx==0){
                break;
            }

            n+=(mi*mx);
        }
        cout<<n<<endl;

    }

}


