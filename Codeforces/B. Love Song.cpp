#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll n,q;cin>>n>>q;
    string s;cin>>s;
    vector<vector<ll>>vc;
    for(ll i=97;i<=122;i++){
        vector<ll>v;
        v.push_back(0);
        for(ll j=0;j<s.size();j++){
            if(i==int(s[j])){
                //cout<<s[j]<<endl;
                v.push_back(v[v.size()-1]+1);
            }
            else{
                v.push_back(v[v.size()-1]);
            }
        }
        vc.push_back(v);
    }
    //cout<<11<<endl;
    /*for(int i=0;i<vc.size();i++){
        for(int j=0;j<vc[i].size();j++){
            cout<<vc[i][j]<<" ";
        }
        cout<<endl;
    }*/
    while(q--){
        ll l,r;cin>>l>>r;
        if(l==1){
            ll ans=0;
            for(ll i=0;i<vc.size();i++){
                ll temp=vc[i][l-1];
                ll temp2=vc[i][r];
                //cout<<temp2<<" "<<temp<<endl;
                temp2-=temp;
                ans+=(temp2*(i+1));
            }
            cout<<ans<<endl;
        }
        else{
            ll ans=0;
            for(ll i=0;i<vc.size();i++){
                ll temp=vc[i][l-1];
                ll temp2=vc[i][r];
                //cout<<temp2<<" "<<temp<<endl;
                temp2-=temp;
                ans+=(temp2*(i+1));
            }
            cout<<ans<<endl;
        }
    }
    return 0;
}

 