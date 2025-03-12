#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define fastIo() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)

int main()
{
    fastIo();
    ll t;
	cin>>t;
	while(t--)
	{
		ll x,n;cin>>x>>n;
		ll temp=12*(n/12);
		temp++;
		//cout<<temp<<endl;
		for(ll i=temp;i<=n;i++){
            if(x%2==0){
                x-=i;
            }
            else{
                x+=i;
            }
            //cout<<i<<" "<<x<<endl;
		}
		cout<<x<<endl;
	}
	return 0;
}