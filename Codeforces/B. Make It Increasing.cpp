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
        ll count = 0, flag = 0;
        vector<ll>v;
        for(int i=0;i<n;i++){
            ll a;cin>>a;
            v.push_back(a);
        }
        reverse(v.begin(), v.end());
        for(int i=1;i<n;i++){
            if(v[i-1]==0){count=-1;break;}
            while(v[i-1]<=v[i]){
                v[i]/=2;count++;
            }
        }
        cout<<count<<endl;

    }

    return 0;
}


