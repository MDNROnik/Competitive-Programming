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
        ll n, r, b;
        cin >> n >> r >> b;

        ll parts = b + 1;
        ll minR = r / parts;
        ll extraR = r % parts;

        //cout<<parts<<" "<<minR<<" "<<extraR<<endl;
        // Build the pattern
        for (ll i = 0; i < extraR; ++i) {
            for (ll j = 0; j < minR+1 ; ++j) {
                cout << "R";
            }
            cout << "B";
        }
        b-=extraR;
        b+=1;
        //cout<<b<<endl;
        for (ll i = 0; i < b; ++i) {
            for (ll j = 0; j < minR ; ++j) {
                cout << "R";
            }
            if(i<b-1){cout<<"B";}
        }
        cout<<endl;
    }

    return 0;
}
