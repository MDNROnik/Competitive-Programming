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
    ll test;cin>>test;
    while(test--){
        ll n;cin>>n;
        vector<pair<ll,ll>>v;
        for(ll i=0;i<n;i++){
            ll a;cin>>a;
            v.push_back({a,i});
        }
        sort(v.begin(), v.end());
        reverse(v.begin(),v.end());
        ll count=n/2;
        ll remain = n%2;
        ll j=0;
        ll ans=0;
        ll now=0;
        vector<ll>vec(n-1,0);

        //cout<<now<<endl;
        vec.push_back(now);
        for(ll i=1;i<=count;i++){
            ll temp = (i*2)*v[j].first;
            vec[v[j].second] = now-i;
            j+=1;
            ll temp2= (i*2)*v[j].first;
            vec[v[j].second] = now+i;
            j+=1;
            ans+=(temp+temp2);
        }
        if(remain){
            count+=1;
            ll temp = (count*2)*v[j].first;
            ans+=temp;
            vec[v[j].second] = now-count;
        }

        cout<<ans<<endl;
        cout<<0<<" ";
        for(ll i=0;i<vec.size();i++){
            cout<<vec[i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
