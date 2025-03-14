#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll test;cin>>test;
    while(test--){
        ll n;cin>>n;
        ll ud=n,mid=n-2;
        ll num=n/2;
        ll count=0;
        while(num>=1){
            ll temp=ud*2;temp+=mid*2;
            ud-=2;mid-=2;
            temp*=num;
            num--;
            count+=temp;
        }
        cout<<count<<endl;
    }

    return 0;
}