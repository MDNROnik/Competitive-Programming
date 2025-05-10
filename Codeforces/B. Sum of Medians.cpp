#include<bits/stdc++.h>
#define ll long long
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
        ll n, k;cin>>n>>k;
        ll total = n*k;
        ll ans = 0;
        vector<ll>v;
        for(int i=0;i<total;i++){
            ll a;cin>>a;v.push_back(a);
        }
        ll index = round(n/2);
        ll j=total-1;
        while(k--){
            //cout<<k<<" "<<j<<endl;
            j-=index;
            ans+=v[j];
            //cout<<j<<" "<<v[j]<<endl;
            j--;
        }
        cout<<ans<<endl;
    }

    return 0;
}
