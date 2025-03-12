#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll test;
    cin>>test;
    while(test--)
    {
        ll n;cin>>n;
        vector<ll>v,v2;
        for(ll i=0;i<n;i++){
            ll a;cin>>a;
            v.push_back(a);
        }
        for(ll i=0;i<n;i++){
            ll a;cin>>a;
            v2.push_back(a);
        }
        ll mo=0,z=0,po=0,c=0;
        for(ll i=0;i<n;i++){
            if(v[i]==v2[i]){

            }
            else if(v[i] < v2[i] && po>0){

            }
            else if(v[i] > v2[i] && mo>0){

            }
            else{c++;break;}

            if(v[i]==0){
                z++;
            }
            else if(v[i]>0){
                po++;
            }
            else if(v[i]<0){
                mo++;
            }
        }
        if(c==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}