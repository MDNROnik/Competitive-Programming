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
    vector<pair<ll,ll>>v;
    for(int i=0;i<n;i++){
        ll a;cin>>a;
        pair<ll,ll>p;
        if(i==0){
            p=make_pair(1,a);
        }
        else{
            p=make_pair(v[v.size()-1].second+1 ,v[v.size()-1].second+a);
        }
        v.push_back(p);
    }
    while(k--){
        ll l=0,r=v.size()-1,mid;
        mid=l+r;mid/=2;
        ll a;cin>>a;
        while(l<r){
            //cout<<l<<" "<<r<<endl;
            mid=l+r;mid/=2;
            //cout<<mid<<endl;
            if(v[mid].first<=a && v[mid].second>=a){
                break;
            }
            else if(v[l].first<=a && v[l].second>=a){
                mid=l;break;
            }
            else if(v[r].first<=a && v[r].second>=a){
                mid=r;break;
            }
            else if(v[mid].first<a && v[mid].second<a){
                l=mid+1;
            }
            else if(v[mid].first>a && v[mid].second>a){
                r=mid;
            }
        }
        l=v[mid].first,r=v[mid].second;
        ll ans1=mid+1;
        mid=l+r;mid/=2;
        while(l<r){
            //cout<<l<<" "<<r<<endl;
            mid=l+r;mid/=2;
            if(mid==a){
                break;
            }
            else if(l==a){
                mid=l;break;
            }
            else if(r==a){
                mid=r;break;
            }
            else if(mid<a){
                l=mid+1;
            }
            else{
                r=mid;
            }
            if(l==r){
                mid=l;
            }

        }
        ll ans2=mid;
        if(ans1>1){
            ans2-=v[ans1-2].second;
            //cout<<v[ans1-1].first<<" "<<v[ans1-1].second<<endl;
        }
        cout<<ans1<<" "<<ans2<<endl;
    }

    return 0;
}