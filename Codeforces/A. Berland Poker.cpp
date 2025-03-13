#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n=1e+9;
int main(){
    ll test;cin>>test;
    while(test--){
        ll n,m,k;cin>>n>>m>>k;
        ll player=n/k;
        if(player >= m){
            cout<<m<<endl;
        }
        else{
            ll temp=m-player;
            k--;
            if(temp%k==0){
                cout<<player-(temp/k)<<endl;
            }
            else{
                temp/=k;temp++;
                cout<<player-temp<<endl;
            }
        }
    }
 
    return 0;
}