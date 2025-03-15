#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define mod 1000000007

int main(){
    ios_base::sync_with_stdio(false);

    ll test;cin>>test;
    while(test--){
        ll n;cin>>n;
        ll arr[n];

        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        string s;cin>>s;
        map<ll,ll>m;
        ll c=0;
        for(int i=0;i<s.size();i++){
            ll temp=s[i];
            //cout<<m[arr[i]]<<endl;
            if(m[arr[i]]==0 || m[arr[i]]==temp){
                m[arr[i]]=temp;
            }
            else{
                c=1;break;
            }
        }
        if(c==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }
}