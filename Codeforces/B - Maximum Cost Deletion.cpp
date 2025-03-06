#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,a,b;
        cin>>n>>a>>b;
        string s;
        cin>>s;
        ll ans = a*n;
        if(b>0) ans+=b*n;
        else{
            int total=0;
            for(int i=1;i<n;i++){
                if(s[i]!=s[i-1]) total++;
            }
            total++;
            ans+=((total/2)+1)*b;
        }
        cout<<ans<<"\n";
    }

}


