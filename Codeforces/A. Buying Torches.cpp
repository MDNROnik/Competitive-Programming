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
        ll x, y, z;cin>>x>>y>>z;
        ll ans = z;
        ll totalStick = (y*z) + z ;
        ll count=0;
        if(totalStick<=x){
            cout<<ans+1<<endl;
            continue;
        }
        while(1){
            ll divider = totalStick/x;
            ll now = divider*x;
            now-=(divider-1);
            now-=1;
            totalStick-=now;
            //cout<<totalStick<<" "<<x<<" "<<divider<<endl;
            count+=divider;
            if(totalStick<=x){
                count++;break;
            }
        }
        //cout<<count<<endl;
        cout<<ans+count<<endl;
    }
    return 0;
}
