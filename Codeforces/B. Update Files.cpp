#include <bits/stdc++.h>
using namespace std;
#define ll long long
vector<ll>arr;
int main(){
    ll test;
    cin>>test;
    while(test--){
        ll n,k,h=0;
        cin>>n>>k;
        ll i=1;n--;
        while(n>0){
            h++;
            n-=i;
            i+=i;
            if(i>=k){
                i=k;break;
            }
        }
        if(n>0 && n%k==0){h+=(n/k);}
        else if(n>0 && h%k!=0){h+=(n/k);h++;}
        cout<<h<<endl;
    }
    return 0;
}