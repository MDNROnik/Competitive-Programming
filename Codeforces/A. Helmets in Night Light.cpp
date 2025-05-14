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
        vector<ll>v;
        vector<pair<ll,ll>>vp;
        for(ll i=0;i<n;i++){
            ll a;cin>>a;
            v.push_back(a);
        }

        for(ll i=0;i<n;i++){
            ll a;cin>>a;
            vp.push_back({a,v[i]});
        }
        sort(vp.begin(),vp.end());

        /*for(ll i=0;i<n;i++){
            cout<<vp[i].first<<" "<<vp[i].second<<endl;
        }*/
        ll ans = k;
        ll count=0;
        ll j=1;
        for(ll i=0;i<n;i++){
            if(vp[i].first > k){break;}
            //cout<<j<<endl;
            //cout<<ans<<" -- ";
            while(j<n && vp[i].second>0){
                vp[i].second--;
                ans+=vp[i].first;
                j++;
            }
            //cout<<j<<endl<<endl;
            //cout<<ans<<endl;
            if(j==n){break;}
        }

        //cout<<j<<endl;
        ans+=((n-j)*k);

        cout<<ans<<endl;

    }

    return 0;
}
