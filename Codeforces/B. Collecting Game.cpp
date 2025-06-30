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
        ll n;cin>>n;
        vector<pair<ll,ll>>v;
        vector<ll>vec;
        for(ll i=0;i<n;i++){
            ll a;cin>>a;
            vec.push_back(a);
            v.push_back({a, i});
        }
        vector<ll>ans(n,0);
        sort(v.begin(), v.end());
        ll pre=0;
        for(ll i=0;i<n;i++){
            ll now = pre+v[i].first;
            pre=now;
            v[i].first=now;
        }
        ll temp = v[n-1].second;
        ans[temp]=n-1;
        for(ll i=n-2;i>=0;i--){
            ll now = v[i].first;
            ll index= v[i].second;
            ll postIndex= v[i+1].second;
            //cout<<now<<" "<<index<<" "<<vec[postIndex]<<endl;
            if(now >= vec[postIndex]){
                ll temp=v[i+1].second;
                ans[index]= ans[temp];
                //cout<<" CATCH "<<endl;
            }
            else{
                ans[index]=i;
                //cout<<" DROP "<<endl;
            }
        }
        for(ll i=0;i<n;i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
