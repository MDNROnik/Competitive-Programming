#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test;cin>>test;
    while(test--){
        ll n;cin>>n;
        map<ll,vector<ll>>mp;
        map<ll,vector<ll>>::iterator it;
        for(int i=1;i<=n;i++){
            ll a;cin>>a;
            mp[a].push_back(i);
        }
        ll ma=0;
        for(it=mp.begin();it!=mp.end();it++){
            vector<ll>vec=it->second;
            ll temp=vec[0];
            for(int i=1;i<vec.size();i++){
                temp-=1;
                temp+=n-vec[i];
                temp++;
                if(ma<temp){ma=temp;}
                temp=vec[i];
            }
        }
        if(ma==0){
            cout<<-1<<endl;
        }
        else{
            cout<<ma<<endl;
        }
    }

    return 0;
}
 