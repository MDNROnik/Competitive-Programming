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
        int n,m;
        cin>>n>>m;
        n=2*n-1;
        string s[n+2];
        for(int i=0;i<n;i++)
        {
            cin>>s[i];
        }
        string ans="";
        for(int i=0;i<m;i++)
        {
            map<char,int>mp;
            for(int j=0;j<n;j++)
            {
                if(mp[s[j][i]]==0)mp[s[j][i]]=1;
                else mp[s[j][i]]=0;
            }
            for(auto it: mp)
            {
                if(it.second!=0)
                {
                    ans+=it.first;
                    break;
                }
            }
        }
        cout<<ans<<endl;
        //mp.clear();
    }

}


