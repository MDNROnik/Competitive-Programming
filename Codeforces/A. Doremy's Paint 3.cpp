#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;cin>>t;
    while(t--){
        ll n;cin>>n;
        vector<int>v;
        map<ll,ll>mp;
        for(int i=0;i<n;i++){
            ll a;cin>>a;
            v.push_back(a);
            mp[a]++;
        }
        if(mp.size()==1){
            cout<<"Yes"<<endl;
        }
        else if(mp.size()>2){
            cout<<"No"<<endl;
        }
        else{
            auto a=mp.begin();
            auto b=a++;
            // cout<<a->first<<" "<<b->first<<endl;
            // cout<<abs(a->second-b->second)<<endl;
            if(n%2==0 && a->second==b->second){
                cout<<"Yes"<<endl;
            }
            else if(n%2==1 && abs(a->second-b->second)==1  ){
                cout<<"Yes"<<endl;
            }
            else{
                cout<<"No"<<endl;
            }
        }
    }
    return 0;
}