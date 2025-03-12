#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define fastIo() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
bool prime[90000001];
int n=90000000;
vector<int>v;
void sieve()
{
    for(int i=2; i*i<=n; i++)
    {
        if(prime[i]==false)
        {
            for(int j=i*i; j<=n; j+=i)
            {
                prime[j]=true;
            }
        }
    }
    for(int i=2; i<=n; i++)
    {
        if(prime[i]==false)v.push_back(i);
    }
}

int main()
{
    fastIo();
    ll test;
    cin>>test;
    while(test--)
    {
        ll n;
        cin>>n;
        map<ll,ll>mp;
        vector<ll>v,after,before;
        for(int i=0; i<n; i++)
        {
            ll a;
            cin>>a;
            mp[a]++;
            v.push_back(a);
        }
        if(mp.size()==1)
        {
            cout<<"YES"<<endl;
            continue;
        }
        after.push_back(v[0]);
        for(int i=1; i<v.size(); i++)
        {
            after.push_back(after[i-1]^v[i]);
        }
        reverse(v.begin(),v.end());
        before.push_back(v[0]);
        for(int i=1; i<v.size(); i++)
        {
            before.push_back(before[i-1]^v[i]);
        }
        reverse(before.begin(),before.end());
        ll c=0;
        for(int i=0; i<n-1; i++)
        {
            if(after[i]==before[i+1])
            {
                c++;
                cout<<"YES"<<endl;
                break;
            }
            else if(after[i]==0)
            {
                ll j=i;
                while(j>=0)
                {
                    if(after[j]==before[i+1])
                    {
                        c++;
                        cout<<"YES"<<endl;
                        break;
                    }
                    j--;
                }
            }
            else if(before[i+1]==0)
            {
                ll j=i+1;
                while(j<=n-1)
                {
                    if(after[i]==before[j])
                    {
                        c++;
                        cout<<"YES"<<endl;
                        break;
                    }
                    j++;
                }
            }
            if(c>0)
            {
                break;
            }
        }
        if(c==0)
        {
            cout<<"NO"<<endl;
        }

    }

    return 0;
}