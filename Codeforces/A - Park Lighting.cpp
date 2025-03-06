#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll test;
    cin>>test;
    while(test--)
    {
        ll n,m;
        cin>>n>>m;
        ll ans=0;
        ll col = 0;
        if(m%2==0){
            col=m;
        }
        else{
            col=m-1;
        }
        ans+=(n*(col/2));
        m-=col;
        ll remain=0;
        if(n%2==0){
            remain=(n/2);
        }
        else{
            remain=n/2;
            remain+=1;
        }
        ans+=(m*(remain));
        cout<<ans<<endl;
    }
}


