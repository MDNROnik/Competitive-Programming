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
    ll t;cin>>t;
    while(t--){
        ll n;cin>>n;

        bool ans = false;
        while(!ans){
            ll m=n;
            map<ll,ll>mp;
            while(n>0){
                //cout<<n<<endl;
                ll now = n%10;
                n/=10;
                if(now==0 || now==1){continue;}
                mp[now]=1;
            }
            ll count= 0;
            for(auto a=mp.begin();a!=mp.end();a++){
                if(m%a->first != 0){
                    //cout<<m<<" IN "<<a->first<<endl;
                    count++;
                    break;
                }
            }
            //cout<<count<<endl;
            if(count==0){ans=true;n=m;}
            else{
                n=m;
                n++;
            }

        }
        cout<<n<<endl;
    }

    return 0;
}
