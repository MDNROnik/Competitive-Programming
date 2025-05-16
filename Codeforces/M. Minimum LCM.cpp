#include<bits/stdc++.h>

#include <numeric>
#define ll long long int
using namespace std;
bool prime[90000001];
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
}

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
    map<ll , pair<ll, ll> >mp;
    map<ll,bool>check;
    //sieve();
    ll t;cin>>t;
    while(t--){
        ll n;cin>>n;
        if(check[n]==true){
            cout<<mp[n].first<<" "<<mp[n].second<<endl;
            continue;
        }

        ll ans = n-1;

        ll a=1, b=n-1;

        if(n%2==0){
            ans = lcm(n/2, n/2);
            a=n/2;b=n/2;
        }

        for(ll i=2;i<=sqrt(n);i++){
            if(n%i==0){
                ll count = n/i;
                ll remain = n-count;
                ll now = lcm(count, remain);
                if(now<ans){
                    ans=now;
                    a=count, b=remain;
                }
            }
        }


        check[n]=true;
        mp[n] = {a,b};

        cout<<a<<" "<<b<<endl;
    }

    return 0;
}
