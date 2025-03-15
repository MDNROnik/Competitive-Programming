#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios_base::sync_with_stdio(false);
    ll n,k;cin>>n>>k;
        vector<int>vec;
        ll minn=1e+18;
        for(int i=0;i<n;i++){
            ll a;cin>>a;
            vec.push_back(a);
            if(minn>a){
                minn=a;
            }
        }
        ll c=0;
        ll maxx=0;
        for(int i=0;i<n;i++){
           if((vec[i]-minn)%k==0 ){
            maxx+=(vec[i]-minn)/k;
           }
           else{
            c++;break;
           }
        }
        if(c==0){
            cout<<maxx<<endl;
        }
        else{
            cout<<-1<<endl;
        }

    return 0;
}