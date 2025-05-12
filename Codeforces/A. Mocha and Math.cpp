#include<bits/stdc++.h>
#define ll long long
using namespace std;

void Yes(int check){
    if(check){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"Yes"<<endl;
    }
}


void No(int check){
    if(check){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;cin>>t;
    while(t--){
        ll n;cin>>n;
        ll mini = INT_MAX;
        vector<ll>v;
        for(int i=0;i<n;i++){
            ll a;cin>>a;
            mini = min(mini, a);
            v.push_back(a);
        }
        while(1){
            ll nextMin = INT_MAX;
            for(int i=0;i<n;i++){
                ll now = v[i]& mini;
                nextMin = min(nextMin, now);
            }
            //cout<<mini<<" "<<nextMin<<endl;
            if(mini == nextMin){
                break;
            }
            mini=nextMin;
        }
        cout<<mini<<endl;

    }

    return 0;
}
