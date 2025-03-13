#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define fastIo() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll test;cin>>test;
    while(test--){
        ll n;cin>>n;
        vector<pair<ll,ll>>v;
        while(n--){
            ll x,y;cin>>x>>y;
            pair<ll,ll>p;
            p=make_pair(x,y);
            v.push_back(p);
        }
        sort(v.begin(),v.end());
        ll x=0,y=0;
        string s;
        ll c=0;
        for(int i=0;i<v.size();i++){
            if(x>v[i].first || y>v[i].second){
                c++;break;
            }
            ll t=abs(x-v[i].first);
            ll t2=abs(y-v[i].second);
            while(t--){
                s.push_back('R');
            }
            while(t2--){
                s.push_back('U');
            }
            x=v[i].first;
            y=v[i].second;
        }
        if(c==1){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
            cout<<s<<endl;
        }

    }
    return 0;
}