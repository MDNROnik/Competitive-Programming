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
        ll n, m;
        cin>>n>>m;
        map<int,bool>row, col;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                ll a;
                cin>>a;
                if(a==1)
                {
                    row[i]=true;
                    col[j]=true;
                }
            }
        }
        ll r=0,c=0;

        for(int i=0; i<n; i++)
        {
            //cout<<i<<" "<<row[i]<<endl;
            if(row[i]==false)
            {
                r++;
            }
        }
        for(int i=0; i<m; i++)
        {
            if(col[i]==false)
            {
                c++;
            }
        }
        ll ans = min(r,c);
        //cout<<ans<<endl;
        if(ans%2==0)
        {
            cout<<"Vivek"<<endl;
        }
        else
        {
            cout<<"Ashish"<<endl;
        }

    }
}


