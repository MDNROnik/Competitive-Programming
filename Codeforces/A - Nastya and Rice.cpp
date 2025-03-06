#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;cin>>t;
    while(t--){
        ll n,a,b,c,d;
        cin>>n>>a>>b>>c>>d;
        ll i = n*abs(a-b);
        ll j = n*(a+b);
        //cout<<i<<" "<<j<<endl;
        //cout<<i<<" "<<c+d<<endl;
        //cout<<j<<" "<<abs(d-c)<<endl;
        if(i>(c+d) || j<(c-d)){
            cout<<"No"<<endl;
        }
        else{
            cout<<"Yes"<<endl;
        }
    }

}


