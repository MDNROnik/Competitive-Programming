#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios_base::sync_with_stdio(false);
    ll test;cin>>test;
    while(test--){
        ll n;cin>>n;
        vector<ll>vec,vec2;
        map<ll,ll>mp;
        map<ll,ll>::iterator it;
        ll big=0,zero=0;
        for(ll i=0;i<n;i++){
            ll a;cin>>a;
            vec.push_back(a);
        }
        ll maxx=0;
        for(ll i=0;i<n;i++){
            ll a;cin>>a;
            vec2.push_back(a);
            if(a>vec[i]){
                big++;
            }
            else if(a==0){
                zero++;
                if(maxx <(vec[i]-a)){
                    maxx=(vec[i]-a);
                }
            }
            else{
                mp[vec[i]-a]++;
            }
        }
        if(big!=0){
            cout<<"NO"<<endl;
        }
        else{
            if(zero!=0){
                if(zero==n){
                    cout<<"YES"<<endl;
                }
                else if(mp.size()==1){
                    it=mp.begin();
                    //cout<<it->first<<" "<<maxx<<endl;
                    if(it->first >= maxx){
                        cout<<"YES"<<endl;
                    }
                    else{
                        cout<<"NO"<<endl;
                    }
                }
                else{
                    cout<<"NO"<<endl;
                }
            }
            else{
                if(mp.size()==1){
                    cout<<"YES"<<endl;
                }
                else{
                    cout<<"NO"<<endl;
                }
            }
        }
    }

    return 0;
}