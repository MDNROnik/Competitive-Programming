#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define fastIo() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    fastIo();
    int n;cin>>n;
    ll ans=0,k=2;
    for(int i=1;i<=n;i++){
        ans+=k;
        k*=2;
    }
    cout<<ans<<endl;

    return 0;
}