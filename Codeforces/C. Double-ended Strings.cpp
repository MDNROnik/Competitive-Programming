#include<bits/stdc++.h>
#define ll long long int
using namespace std;
 
/*bool prime[90000001];
int n=90000000;
vector<int>v = {1};
*/
/*void sieve()
{
	for(int i=2;i*i<=n;i++)
	{
		if(prime[i]==false)
		{
			for(int j=i*i;j<=n;j+=i)
			{
				prime[j]=true;
			}
		}
	}
	for(int i=2;i<=n;i++)
	{
		if(prime[i]==false)v.push_back(i);
	}
}
*/
 
void Yes(int check){
    if(check){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"Yes"<<endl;
    }
}
void No(int check){
    if(check){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
}
ll gcd(ll a, ll b) {
    while(b != 0) {
        ll temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
ll lcm(ll a, ll b) {
    return (a / gcd(a, b)) * b;
}
 
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    //sieve();
    ll test;cin>>test;
    while(test--){
        string a, b;cin>>a>>b;
        ll n=a.size(), m=b.size();
        ll total = n+m;
        ll now=0;
        if(n>m){
            swap(a,b);
            swap(n,m);
        }
        ll ans=0;
        for(ll i=0;i<n;i++){
            for(ll j=0;j<m;j++){
                if(a[i]==b[j]){
                    ll count=0;
                    ll k=i,l=j;
                    while(k<n && l<m && a[k]==b[l]){
                        count++;
                        k++;l++;
                    }
                    ans=max(ans, count);
                }
            }
        }
        //cout<<ans<<endl;
        ans+=ans;
        cout<<total-ans<<endl;
    }
    return 0;
}