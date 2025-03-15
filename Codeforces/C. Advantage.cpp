#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios_base::sync_with_stdio(false);
    ll test;cin>>test;
    while(test--){
        ll n;cin>>n;
        vector<ll>v;
        ll maxx=0,maxx2=0;;
        for(int i=0;i<n;i++){
            ll temp;cin>>temp;
            v.push_back(temp);
            if(maxx<temp){
                maxx2=maxx;
                maxx=temp;
            }
            else if(maxx2<temp){
                maxx2=temp;
            }
        }
        //cout<<maxx<<" "<<maxx2<<endl;
        for(int i=0;i<n;i++){
            if(v[i]==maxx){
                cout<<v[i]-maxx2<<" ";
            }
            else{
                cout<<v[i]-maxx<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}