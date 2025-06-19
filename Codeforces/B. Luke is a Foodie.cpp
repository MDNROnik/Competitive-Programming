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
    ll test;
    cin >> test;
    while (test--) {
        ll n, x;cin>>n>>x;
        ll count=0, mi=INT_MAX, mx=INT_MIN;
        for(ll i=0;i<n;i++){
            ll a;cin>>a;
            mi = min(mi, a);
            mx= max(mx, a);
            ll mid = mi+mx;
            mid/=2;
            //cout<<mi<<" "<<mx<<" "<<mid<<endl;
            if( abs(mid-mi)<=x && abs(mid-mx)<=x ){
                continue;
            }
            else{
                count++;
                mi=a;
                mx=a;
            }
        }
        cout<<count<<endl;
    }

    return 0;
}
