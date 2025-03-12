#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define fastIo() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
int main()
{
    fastIo();
    ll n;scanf("%lld",&n);
    vector<ll>v;
    map<ll,ll>mp;
    map<ll,ll>::iterator it,it2;
    for(int i=0;i<n;i++){
        ll a;
        scanf("%lld",&a);
        mp[a]++;
    }
    ll ans=0;
    for(it=mp.begin();it!=mp.end();it++){
        ll c=0;
        for(it2=it;it2!=mp.end();it2++){
            if(abs(it->first-it2->first) <= 5){
                c+=it2->second;
            }
            else{
                break;
            }
        }
        if(c>ans){
            ans=c;
        }
        else if(it2==mp.end()){
            break;
        }
    }
    if(ans==0){
        cout<<1<<endl;
    }
    else{
        cout<<ans<<endl;
    }
    return 0;
}