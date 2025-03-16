#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test;cin>>test;
    while(test--){
        ll n,k;cin>>n>>k;
        ll a;
        map<ll,ll>mp;
        map<ll,ll>::reverse_iterator i;
        for(int i=0;i<k;i++){
            cin>>a;
            mp[a]++;
        }
        ll cat=0,mice=0;
        for ( i = mp.rbegin(); i != mp.rend();) {
            if(i->second == 0){
                ++i;
            }
            else{
                ll t=n-(i->first);
                if(t>=0){
                    cat+=t;mice++;
                    i->second-=1;
                }
            }
            if(cat>=i->first){break;}
        }
        cout<<mice<<endl;
    }
    return 0;
}
 