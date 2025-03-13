#include<bits/stdc++.h>
using namespace std;
#define ll long long
//unsigned ll n = std::bitset<32>(s).to_ulong(); //for string_binary to decimal
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test;cin>>test;
    while(test--){
        ll A,B,n;
        cin>>A>>B>>n;
        ll count=0,count2=0;
        vector<ll>a,b;
        for(int i=0;i<n;i++){
            ll t;cin>>t;
            a.push_back(t);
        }
        map<ll,vector<ll>>mp;
        map<ll,vector<ll>>::iterator it,it2;
        for(int i=0;i<n;i++){
            ll temp;
            cin>>temp;
            mp[a[i]].push_back(temp);
        }
        for(it=mp.begin();it!=mp.end();it++){
            vector<ll>v=it->second;
            ll attact=it->first;
            for(ll i=0;i<v.size();i++){
                ll t,t2;
                t=v[i]/A;
                if(t*A != v[i]){
                    t++;
                }
                v[i]-=t*A;
                t2=B/attact;
                if(t2*attact != B){
                    t2++;
                }
                if(t<=t2){
                    B-=(t*attact);
                }
                else{
                    B=0;
                }
                if(B==0 || B<0){
                    it2=it;it2++;
                    //cout<<t<<" "<<t2<<endl;
                    if(it2==mp.end() && i+1==v.size() && v[i]<=0 && t<=t2){
                        count=0;break;
                    }
                    else{
                        count=1;break;
                    }
                }
            }
            if(count==1){
                break;
            }
        }
        if(count==1){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
 
 
    return 0;
}