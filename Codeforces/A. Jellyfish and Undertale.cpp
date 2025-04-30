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
        ll a, b, n, ans=0;cin>>a>>b>>n;
        vector<ll>v;
        for(int i=0;i<n;i++){
            ll temp;cin>>temp;
            v.push_back(temp);
        }
        int i=0;
        sort(v.begin(), v.end());
        ans+=(b-1);
        b=1;
        while(i<n){
            if(b+v[i] <= a){
                b+=v[i];
                ans+=(b-1);
                b=1;
            }
            else{
                ans+=(a-1);
                b=1;
            }
            i++;
        }
        ans+=1;
        cout<<ans<<endl;
    }

    return 0;
}


