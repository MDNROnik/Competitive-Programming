#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    ll n;
    cin>>n;
    ll cost[n];
    map<int,int>mp;
    map<int,int>::iterator it,it2;
    for(ll i=0;i<n;i++){
        cin>>cost[i];
        mp[cost[i]]++;
    }
    it2=mp.begin();
    it=mp.begin();it++;
    for(;it!=mp.end();it++){
        mp[it->first]=it2->second+it->second;it2++;
    }
    ll d;
    cin>>d;
    sort(cost,cost+n);
    ll spend[d];
    ll num;
    ll mid;
    for(ll i=0;i<d;i++){
        cin>>num;
        ll total=0;
        if(num>=cost[n-1]){
            cout<<n<<endl;
        }
        else{
            ll l=0,r=n,c=0,cc=0,mid;
            while(l<=r){
                if(c==0){
                    mid=l+r;mid/=2;
                }
                if(cost[mid]<=num && cost[mid+1]>num){cc=1;cout<<mid+1<<endl;break;}
                else if(cost[mid]==num){
                    cc=1;cout<<mp[cost[mid]]<<endl;break;
                }
                else if(cost[mid]>num){
                    r=mid-1;
                }
                else if(cost[mid]<num){
                    l=mid+1;
                }
            }
            if(cc==0){cout<<0<<endl;}
        }
    }
    return 0;
}