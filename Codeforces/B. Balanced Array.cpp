#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios_base::sync_with_stdio(false);
    ll test;cin>>test;
    while(test--){
        ll n;cin>>n;int count=0;
        vector<ll>even,odd;
        ll e=0,o=0;
        for(int i=1;i<=n;i++){
            if(i%2==0){even.push_back(i);e+=i;}
            else{odd.push_back(i);o+=i;}
        }
        o-=(n-1);
        if((e-o)%2==0){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
            for(int i=0;i<even.size();i++){
                cout<<even[i]<<" ";
            }
            for(int i=0;i<odd.size()-1;i++){
                cout<<odd[i]<<" ";
            }
            cout<<(e-o)<<endl;
        }
    }

    return 0;
}