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
        vector<ll>v;
        vector<pair<ll,ll>>left,right;
        ll last = INT_MAX;
        ll index = -1;
        for(int i=0;i<n;i++){
            ll a;cin>>a;
            v.push_back(a);
            left.push_back({last, index});
            if(last>a){
                last = a;
                index = i;
            }
        }
        last = INT_MAX;
        for(int i=n-1;i>=0;i--){
            ll a = v[i];
            right.push_back({last, index});
            if(last>a){
                last = a;
                index = i;
            }
        }
        reverse(right.begin(), right.end());
        ll x=-1,y=-1,z=-1;
        for(int i=1;i<n-1;i++){
            //cout<<left[i].first<<" -- "<<v[i]<<" -- "<<right[i].first<<endl;
            if(left[i].first < v[i] && v[i]> right[i].first){
                x=left[i].second;
                y=i;
                z=right[i].second;
                break;
            }
        }
        if(x==-1){
            No(1);
        }
        else{
            Yes(1);
            cout<<x+1<<" "<<y+1<<" "<<z+1<<endl;
        }

    }

    return 0;
}
