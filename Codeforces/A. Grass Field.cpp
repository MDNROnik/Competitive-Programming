#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll test;
    cin>>test;
    while(test--){
        ll a[2][2];
        map<int,int>mp;
        for(int i=0;i<2;i++){
            for(int j=0;j<2;j++){
                cin>>a[i][j];
                mp[a[i][j]]++;
            }
        }
        if(mp[1]==0){
            cout<<0<<endl;
        }
        else if(mp[1]==1){
            cout<<1<<endl;
        }
        else if(mp[1]==2 || mp[1]==3){
            cout<<1<<endl;
        }
        else{
            cout<<2<<endl;
        }
    }
    return 0;
}
 