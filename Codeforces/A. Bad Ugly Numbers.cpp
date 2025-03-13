#include<bits/stdc++.h>
using namespace std;
#define ll long long
//unsigned ll n = std::bitset<32>(s).to_ulong(); //for string_binary to decimal
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll test;cin>>test;
    while(test--){
        ll n;cin>>n;
        if(n==1){
            cout<<-1<<endl;
        }
        else{
            n-=1;
            while(n--){
                cout<<3;
            }
            cout<<4<<endl;
        }
    }
    return 0;
}