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
        vector<ll>v(n+1,0);
        vector<ll>vec;
        for(int i=1; i<=n; i++)
        {
            ll a;
            cin>>a;
            v[a]=i;
            vec.push_back(a);
        }
        for(int i=n; i>=1; i--)
        {
            //cout<<i<<endl;
            for(int j=v[i]-1; j<n && vec[j]!=0 ; j++)
            {
                //cout<<i<<" HELLO "<<endl;
                cout<<vec[j]<<" ";
                vec[j]=0;
            }
        }
        cout<<endl;
    }

    return 0;
}