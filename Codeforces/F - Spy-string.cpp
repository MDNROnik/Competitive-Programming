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
        vector<string>v;
        map< int, map<char,int> >mp;

        for(int i=0; i<n; i++)
        {
            string s;
            cin>>s;
            v.push_back(s);
        }
        string now = v[0];
        int ans=0;
        for(int i=0; i<m; i++)
        {
            for(int j=0; j<26; j++)
            {
                string k = now;
                k[i] = ('a'+j);
                int count=0;

                for(int l=0; l<v.size(); l++)
                {
                    string s = v[l];
                    int c=0;
                    for(int n=0; n<s.size(); n++)
                    {
                        if(c>1)
                        {
                            break;
                        }
                        if(s[n]!=k[n])
                        {
                            c++;
                        }
                    }
                    if(c>1)
                    {
                        count=0;
                        break;
                    }
                    else
                    {
                        count++;
                    }
                }
                if(count==n){
                    ans=1;
                    cout<<k<<endl;break;
                }
            }
            if(ans){break;}
        }
        if(ans==0){
            cout<<-1<<endl;
        }
    }
}


