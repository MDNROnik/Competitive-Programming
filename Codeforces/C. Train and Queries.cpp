#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll test;
    cin>>test;
    while(test--){
        ll n,k,temp=0;
        cin>>n>>k;
        vector<int>vec;
        for(int i=0;i<n;i++){
            ll a;cin>>a;
            if(temp!=a){
                vec.push_back(a);
                temp=a;
            }
        }
        map<ll,ll>mp,mp2;
        for(int i=0;i<vec.size();i++){
            if(mp[vec[i]]==0){
                mp[vec[i]]=i+1;
            }
            else{
                mp2[vec[i]]=i+1;
            }
        }
        while(k--){
            ll n1,n2;cin>>n1>>n2;
            ll first=mp[n1];
            ll second=mp2[n2];
            if(first==0){
                cout<<"NO"<<endl;continue;
            }
            if(second==0){
                second=mp[n2];
            }
            if(second==0){
                cout<<"NO"<<endl;continue;
            }
            else{
                if(first<second){
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
 