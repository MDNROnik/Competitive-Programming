#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define fastIo() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
int main()
{
    fastIo();
    ll test;
    cin>>test;
    while(test--)
    {
        string s;
        ll n;
        cin>>n;
        cin>>s;
        ll c=0;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='W' || i==0)
            {
                ll r=0,b=0,j;
                if(i==0 && s[i]=='W')
                {
                    j=i+1;
                }
                else if(i==0 && s[i]!='W')
                {
                    j=i;
                }
                else
                {
                    j=i+1;
                }
                for(; j<n; j++)
                {
                    if(s[j]=='W')
                    {
                        break;
                    }
                    else if(s[j]=='R')
                    {
                        r++;
                    }
                    else if(s[j]=='B')
                    {
                        b++;
                    }
                }
                //cout<<i<<endl;
                //cout<<r<<" "<<b<<endl;
                if((b+r)==1)
                {
                    c++;
                    break;
                }
                else if((r==(b+r) && r!=0) || (b==(b+r) && b!=0) )
                {
                    c++;
                    break;
                }
                i=j-1;
            }
        }
        if(c==1)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
    return 0;
}