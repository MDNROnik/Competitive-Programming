#include<bits/stdc++.h>
#define ll long long int
using namespace std;

bool prime[900001];
int n=900000;
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
    sieve();
    ll test;cin>>test;
    while(test--){
        ll d;cin>>d;
        ll n=v.size();
        ll first=1, second=1, count=0;
        for(ll i=0;i<n;i++){
            if( (v[i]-first)>=d && count==0){
                first=v[i];count++;
            }
            else if( (v[i]-first)>=d && count==1){
                second=v[i];break;
            }
        }
        cout<<first*second<<endl;
    }
    return 0;
}
