#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios_base::sync_with_stdio(false);
    ll n,r,avg;
    cin>>n>>r>>avg;
    priority_queue<pair<ll,ll>,vector<pair<ll,ll>>, greater<pair<ll,ll>>>pq;
    ll grade=0;
    ll nn=n;
    while(nn--){
        ll g,e;cin>>g>>e;
        pq.push(make_pair(e,g));
        grade+=g;
    }
    if((grade/n) >= avg){
        cout<<0<<endl;return 0;
    }
    ll req=avg*n;
    ll need=req-grade;
    ll total=0;
    while(!pq.empty()){

        ll t=pq.top().second;
        if(t==r){}
        else{
            ll temp=r-pq.top().second;
            if(temp<=need){
                need-=temp;
                total+=(temp*pq.top().first);
            }
            else{
                total+=(need*pq.top().first);
                need=0;
            }
            if(need==0){break;}
        }
        pq.pop();
    }
    cout<<total<<endl;
    return 0;
}