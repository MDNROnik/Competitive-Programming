#include<bits/stdc++.h>
#define ll long long
using namespace std;

void YES(int check){
    if(check){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"Yes"<<endl;
    }
}
void NO(int check){
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
        ll n,k;cin>>n>>k;
        ll count=0;
        for(int i=0;i<n;i++){
            ll a;cin>>a;
            if(a==k){count++;}
        }
        if(count){
            YES(1);
        }
        else{
            NO(1);
        }
    }

    return 0;
}


