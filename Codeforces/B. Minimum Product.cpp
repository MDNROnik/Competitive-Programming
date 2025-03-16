#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios_base::sync_with_stdio(false);
    ll test;cin>>test;
    while(test--){
        ll a,b,x,y,c;cin>>a>>b>>x>>y>>c;
        vector<ll>vec;

        if(a-c >= x){
            vec.push_back((a-c)*b);
        }
        else{
            ll t=a-x;
            t=c-t;
            if(b-t >= y){
                vec.push_back(x*(b-t));
            }
            else{
                vec.push_back(x*y);
            }
        }

        if(b-c >= y){
            vec.push_back(a*(b-c));
        }
        else{
            ll t=b-y;
            t=c-t;
            if(a-t >= x){
                vec.push_back(y*(a-t));
            }
            else{
                vec.push_back(x*y);
            }
        }
        sort(vec.begin(),vec.end());
        cout<<vec[0]<<endl;
    }
}