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
        ll n, k, b, s;cin>>n>>k>>b>>s;

        if(s/k >= b){
            ll one = b*k;
            ll remain = s-one;
            ll allCells = n*(k-1);
            if(allCells >= remain){
                vector<ll>v(n,0);
                v[n-1]=one;
                for(ll i=n-1;i>=0;i--){
                    if(remain>=(k-1)){
                        v[i]+=(k-1);
                        remain-=(k-1);
                    }
                    else if(remain>0){
                        v[i]+=remain;
                        remain=0;
                    }
                    else{
                        break;
                    }
                }
                for(ll i=0;i<n;i++){
                    cout<<v[i]<<" ";
                }
                cout<<endl;
            }
            else{
                cout<<-1<<endl;
            }
        }
        else{
            cout<<-1<<endl;
        }
    }

    return 0;
}
