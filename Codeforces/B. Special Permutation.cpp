#include<bits/stdc++.h>
using namespace std;
#define ll int
#define fastIo() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int main()
{
    fastIo();
    ll test;
    cin>>test;
    while(test--)
    {
        ll n,a,b;cin>>n>>a>>b;
        /*if( (a <= n/2 && b<=n/2) || (a >= n/2 && b >= n/2)){
            cout<<-1<<endl;continue;
        }
        map<ll,ll>mp;
        mp[a]=1;mp[b]=1;
        cout<<a<<" ";
        ll lar;
        if(n!=b){
            lar=n;
        }
        else{lar=n-1;}
        for(int i=lar;i>=)
        */
        map<ll,ll>mp;
        mp[a]=1;mp[b]=1;

        vector<ll>v;
        v.push_back(a);
        ll si=n/2-1,j=0;
        for(int i=n;i>=1;i--){
            if(j==si){
                break;
            }
            if(mp[i]==0 && i>a){
                j++;
                v.push_back(i);
                //cout<<i<<endl;
            }
        }
        j=0;
        v.push_back(b);
        for(int i=1;i<=n;i++){
            if(j==si){
                break;
            }
            if(mp[i]==0 && i<b){
                j++;
                v.push_back(i);
            }
        }
        if(v.size()!=n){
            cout<<-1<<endl;continue;
        }
        for(int i=0;i<n;i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
}