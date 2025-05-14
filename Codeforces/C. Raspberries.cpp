#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void Yes(int check){
    if(check){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"Yes"<<endl;
    }
}


void No(int check){
    if(check){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;cin>>t;
    while(t--){
        ll n,k;cin>>n>>k;
        ll product = 1;
        ll ans=INT_MAX;
        ll even=0;
        for(ll i=0;i<n;i++){
            ll a;cin>>a;
            if(a%2==0){
                even++;
            }
            if(a%k==0){
                //cout<<111<<endl;
                ans=0;
            }
            else{
                ll a2 = a/k;
                a2++;
                a2*=k;
                ans = min(ans, abs(a2-a));
            }
        }

        if(k==4){
            if(even>=2){
                ans=0;
            }
            else{
                ans = min(ans, (2-even));
            }
        }
        cout<<ans<<endl;

    }

    return 0;
}
