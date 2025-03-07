#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll test;cin>>test;
    while(test--){
        ll n;cin>>n;
        vector<ll>v;
        v.push_back(0);
        for(int i=0;i<n;i++){
            ll a;cin>>a;
            v.push_back(a);
        }
        v.push_back(0);
        ll ans=0,ans2=0;
        /*for(int i=0;i<v.size()-1;i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;*/
        for(int i=1;i<v.size()-1;i++){
            //cout<<v[i]<<endl;
            if(v[i-1]<v[i] && v[i]>v[i+1]){
                ll temp = max(v[i-1],v[i+1]);
                //cout<<v[i]<<" "<<temp<<endl;
                ans+=(v[i]-temp);
                v[i]=temp;
                //cout<<ans2<<" "<<v[i]<<endl;

            }
        }
        //cout<<ans<<endl;
        for(int i=1;i<=n+1;i++){
            ans2+=abs(v[i]-v[i-1]);
        }
        //ans2*=2;
        //cout<<ans<<" "<<ans2<<endl;
        cout<<ans+ans2<<endl;

    }
    return 0;
}

 