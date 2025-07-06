#include<bits/stdc++.h>
#define ll long long int
using namespace std;
ll mod = 1e9+7;
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

ll maxSubArray(vector<ll>& nums) {
    ll max_sum = nums[0];   // Initialize with first element
    ll current_sum = nums[0];

    for (ll i = 1; i < nums.size(); i++) {
        // Either take the current element alone, or extend the previous subarray
        current_sum = max(nums[i], current_sum + nums[i]);
        max_sum = max(max_sum, current_sum);
    }

    return max_sum;
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
        ll n,ans = 1;
        cin>>n;
        vector <ll> a(n),b(n),cnt(n);
        for(ll i = 0 ; i < n ; i++) {
            cin>>a[i];
        }
        for(ll i = 0 ; i < n ; i++) {
            cin>>b[i];
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());

        ll j = 0;
        for(ll i = 0 ; i < n ; i++) {
            while(a[j] <= b[i] and j!=n) {
                j++;
            }
            if(j!=n){
                cnt[i] = n-j;
            }
        }

        sort(cnt.begin(),cnt.end());
        for(ll i = 0 ; i < (ll)cnt.size() ; i++) {
            ans = ((ans%mod)*((cnt[i]-i)%mod))%mod;
        }
        cout<<ans<<endl;
    }

    return 0;
}
