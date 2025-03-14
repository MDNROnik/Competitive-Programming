#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;cin>>n;
    map<char,ll>mp;
    map<char,ll>::iterator it;
    for(int i=0;i<n;i++){
        string s;cin>>s;
        mp[s[0]]++;
    }
    ll c=0;
    for(it=mp.begin();it!=mp.end();it++){
        ll temp=it->second;
        //cout<<it->first<<" "<<it->second<<endl;;
        if(temp%2==0){
            temp/=2;temp--;
            while(temp>0){
                c+=(temp*2);temp--;
            }
        }
        else{
            ll t=temp/2+1;
            ll t2=temp/2;
            t--,t2--;
            //cout<<t<<" "<<t2<<endl;
            while(t>0){
                c+=t;t--;
            }
            while(t2>0){
                c+=(t2);t2--;
            }
        }
    }
    cout<<c<<endl;

    return 0;
}