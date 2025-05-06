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
        map<ll,ll>mp;
        ll n;cin>>n;
        ll now = 0;
        for(int i=0;i<n;i++){
            ll a;cin>>a;
            mp[a]++;
            if(mp[a]>now){
                now=mp[a];
            }
        }
        ll total = now;
        ll remain = n-now;
        ll ans = 0;
        while(now<remain){
            ans+=now;
            ans++;
            remain-=now;
            now+=now;
        }
        ans+=remain;
        ans++;
        if(total==n){
            ans = 0;
        }
        cout<<ans<<endl;
    }
 
    return 0;
}