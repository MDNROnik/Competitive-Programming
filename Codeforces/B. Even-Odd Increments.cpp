#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ios_base::sync_with_stdio(false);
    ll test;cin>>test;
    while(test--){
        ll n,q;cin>>n>>q;
        ll a;
        ll cnte=0,cnto=0;
        ll sume=0,sumo=0;
        ll arr[n];
        for(int i=0;i<n;i++){
            cin>>a;
            arr[i]=a;;
            if(a%2==0){
                cnte++;sume+=a;
            }
            else{
                cnto++;sumo+=a;
            }
        }
        //cout<<sume<<" hello "<<sumo<<endl;
        while(q--){
            ll t,x;
            cin>>t>>x;
            if(t==1){
                if(x%2==0){
                    ll temp=cnto*x;
                    sumo+=temp;
                }
                else{
                    ll temp=cnto*x;
                    sumo+=temp;
                    cnto=0;cnte=n;
                }
            }
            else{
                if(x%2==0){
                    ll temp=cnte*x;
                    sume+=temp;
                }
                else{
                    ll temp=cnte*x;
                    sume+=temp;
                    cnte=0;
                    cnto=n;
                }
            }
            cout<<sume+sumo<<endl;
        }
    }
}