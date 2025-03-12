#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define fastIo() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)

int main()
{
    fastIo();
    ll n;cin>>n;
    vector<ll>v,u;
    v.push_back(0);
    u.push_back(0);
    while(n--){
        ll a;cin>>a;
        v.push_back(a);
        u.push_back(a);
    }
    sort(u.begin(),u.end());
    for(int i=1;i<v.size();i++){
        v[i]+=v[i-1];
        u[i]+=u[i-1];
    }
    ll m;cin>>m;
    for(int i=0;i<m;i++){
        ll t,l,r;cin>>t>>l>>r;
        l--;
        if(t==1){
            cout<<v[r]-v[l]<<endl;
        }
        else{
            //cout<<u[r]<<endl;
            cout<<u[r]-u[l]<<endl;
        }
    }
	return 0;
}