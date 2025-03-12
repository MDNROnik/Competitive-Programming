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
    ll n,m;
    cin>>n>>m;
    ll t=n-(m-1);
    ll maxx=(t*(t-1));
    maxx/=2;
    if(n%m==0)
    {
        ll t=n/m;
        ll minn=(t*(t-1));
        minn/=2;
        minn*=m;
        cout<<minn<<" "<<maxx<<endl;
    }
    else
    {
        ll temp=n%m;
        ll t=n/m;
        ll minn=(t*(t-1))/2;
        t++;
        ll minn2=(t*(t-1))/2;
        ll ans=minn2*temp;
        ans+=(minn*(m-temp));
        cout<<ans<<" "<<maxx<<endl;
    }

    return 0;
}