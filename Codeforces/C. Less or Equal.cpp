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
    ll n,k;cin>>n>>k;
    vector<ll>v;
    for(int i=0;i<n;i++){
        ll a;cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    if(k==n){
        cout<<v[n-1]<<endl;
    }
    else if(k==0){
        if(v[0]==1){
            cout<<-1<<endl;
        }
        else{
            cout<<v[0]-1<<endl;
        }
    }
    else if(v[k-1]==v[k]){
        cout<<-1<<endl;
    }
    else{
        cout<<v[k-1]<<endl;
    }

    return 0;
}