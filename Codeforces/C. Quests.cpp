#include<bits/stdc++.h>
#define ll long long int
using namespace std;

/*bool prime[90000001];
int n=90000000;
vector<int>v = {1};

void sieve()
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
}*/


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
    int test;
    cin>>test;
    while(test--)
    {
        ll n, m;cin>>n>>m;
        vector<ll>a;
        for(ll i=0;i<n;i++){
            ll c;cin>>c;
            if(i==0){a.push_back(c);continue;}
            ll d=c+a[i-1];
            a.push_back(d);
        }
        ll ans=0, maxi = 0;
        for(ll i=0;i<n;i++){
            ll c;cin>>c;
            if(i<m){
                maxi = max(maxi, c);
                ll remain = m-(i+1);
                ll total = a[i];
                total+=(maxi*remain);
                ans = max(ans, total);
            }
            else{
                continue;
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}
