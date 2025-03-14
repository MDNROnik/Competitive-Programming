#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll a,b,c;
void solve2(ll a,ll b,vector<ll>&v){
    for(int i=1;i<=3;i++){
        ll maxx=0;
        if(i==1){
            maxx+=abs(a-b);maxx+=abs(a-c);maxx+=abs(c-b);
        }
        else if(i==2){
            maxx+=abs(a-b);maxx+=abs(a-(c+1));maxx+=abs((c+1)-b);
        }
        else if(i==3){
            maxx+=abs(a-b);maxx+=abs(a-(c-1));maxx+=abs((c-1)-b);
        }
        v.push_back(maxx);
    }
    return ;
}

void solve(ll a,vector<ll> &v){
    solve2(a,b,v);
    solve2(a,b+1,v);
    solve2(a,b-1,v);
    return ;
}
int main(){
    ll test;cin>>test;
    while(test--){
        cin>>a>>b>>c;
        vector<ll>v;
        solve(a,v);
        solve(a+1,v);
        solve(a-1,v);
        sort(v.begin(),v.end());
        cout<<v[0]<<endl;
    }
    return 0;
}