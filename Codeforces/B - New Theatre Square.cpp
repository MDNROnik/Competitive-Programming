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
        ll x,y;
        cin>>x>>y;
        vector<string>vs;
        for(int i=0; i<n; i++)
        {
            string s;
            cin>>s;
            vs.push_back(s);
        }
        ll ans=0;
        for(int i=0; i<n; i++)
        {
            ll count=0;
            for(int j=0; j<m; j++)
            {
                if(vs[i][j]=='*')
                {
                    ll c=count,c2=count;

                    ll total=( ((c/1)*x) + (c%1)*y );
                    ll total2=( ((c/2)*y) + (c%2)*x );

                    ans+=(min(total, total2));
                    count=0;
                }
                else
                {
                    count++;
                }
            }
            ll c=count,c2=count;

            ll total=( ((c/1)*x) + (c%1)*y );
            ll total2=( ((c/2)*y) + (c%2)*x );

            ans+=(min(total, total2));
        }
        cout<<ans<<endl;
    }
}


