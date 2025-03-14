#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n,q;cin>>n>>q;
    map<ll,ll>mp;
    ll sum=0;
    for(int i=0;i<n;i++){
        ll a;cin>>a;
        mp[i]=a;
        sum+=a;
    }
    ll temp=0;
    while(q--){
        ll t;cin>>t;
        if(t==1){
            ll i,a;cin>>i>>a;
            i--;
            if(mp[i]==0){
                sum-=temp;
                sum+=a;
                mp[i]=a;
            }
            else{
                //cout<<mp[i]<<endl;
                sum-=mp[i];
                sum+=a;
                mp[i]=a;
            }
        }
        else{
            ll a;cin>>a;
            mp.clear();
            sum=a*n;
            temp=a;
        }
        cout<<sum<<endl;
    }

    return 0;
}