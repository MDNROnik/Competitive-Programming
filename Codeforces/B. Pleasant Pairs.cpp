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
        ll n,ans=0;
        cin>>n;
        vector<int> index(2*n+1,-1);
        for(ll i=1; i<=n; i++)
        {
            ll a;
            cin>>a;
            index[a] = i;
        }
        for(ll sum=3; sum<2*n; sum++)
        {
            for(ll i=1; i*i<=sum; i++)
            {
                if(sum%i==0 && i*i!=sum && index[i]!=-1 && index[sum/i]!=-1 && index[i]+index[sum/i]==sum)
                {
                    //cout<<sum<<endl;
                    //cout<<i<<" "<<index[i]<<endl<<endl;
                    ans++;
                }
            }
        }
        cout<<ans<<endl;

    }

}

 