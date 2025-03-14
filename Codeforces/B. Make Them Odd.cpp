#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll test;cin>>test;
    while(test--){
        ll n;cin>>n;
        map<ll,ll>mp;
        map<ll,ll>::iterator it;
        for(int i=0;i<n;i++){
            ll a;cin>>a;
            if(a%2==0){
                mp[a];
            }
        }
        if(mp.size()==0){
            cout<<0<<endl;continue;
        }
        it=mp.end();it--;
        ll count=0;
        for(;;it--){
            count++;
            ll temp=it->first/2;
            if(temp%2==0){
                mp[temp];
            }
            if(it==mp.begin()){break;}
        }
        cout<<count<<endl;
    }


    return 0;
}