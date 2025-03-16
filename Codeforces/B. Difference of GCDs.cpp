#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll test;cin>>test;
    while(test--){
        ll n;cin>>n;
        ll l,r;
        cin>>l>>r;
        vector<ll>vec;
        map<ll,ll>mp;
        ll c=0;
            for(ll i=1;i<=n;i++){
                if(mp[__gcd(i,l)]==0){
                    vec.push_back(l);
                    mp[__gcd(i,l)]=1;
                }
                else{
                    ll temp;
                    if(l%i==0){
                        temp=l/i;
                    }
                    else{
                        temp=l/i;temp++;
                    }
                    //cout<<i<<" "<<temp<<endl;
                    while(1){
                        //cout<<(temp*i)<<" "<<i<<endl;
                        if(temp*i > r){c++;break;}
                        if(mp[__gcd(i,(temp*i))]==0){
                            vec.push_back((temp*i));
                            mp[__gcd(i,(temp*i))]=1;break;
                        }
                        temp++;
                    }
                }
                if(c==1){break;}
            }
            if(c==1){cout<<"NO"<<endl;}
            else{
                cout<<"YES"<<endl;
                for(ll i=0;i<vec.size();i++){
                    cout<<vec[i]<<" ";
                }
                cout<<endl;
            }

    }
    return 0;
}