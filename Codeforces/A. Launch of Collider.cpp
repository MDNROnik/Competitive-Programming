#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios_base::sync_with_stdio(false);
    ll n;cin>>n;
        string s;
        cin>>s;
        vector<ll>vec(n);
        for(int i=0;i<n;i++){
            cin>>vec[i];
        }
        //cout<<"hello"<<endl;
        ll minn=INT_MAX;
        for(ll i=0;i<n-1;i++){
            if(s[i]=='R' && s[i+1]=='L'){
                ll temp=vec[i+1]-vec[i];
                temp/=2;
                if(minn>temp){
                    minn=temp;
                }
            }
        }
        if(minn==INT_MAX){
            cout<<-1<<endl;
        }
        else{
            cout<<minn<<endl;
        }
    return 0;
}