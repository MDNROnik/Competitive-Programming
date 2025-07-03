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
        ll n;cin>>n;
        vector<ll>v;
        v.push_back(0);
        ll ans=0;
        ll maxi=0, mini=LLONG_MAX;
        for(ll i=0;i<n;i++){
            ll a;cin>>a;
            v.push_back(v[i]+a);
            maxi=max(maxi, a);
            mini=min(mini, a);
        }


        //cout<<maxi<<" "<<mini<<endl;
        ans = abs(maxi-mini);
        /*for(ll i=0;i<=n;i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;*/
        for(ll i=2;i<=sqrt(n);i++){
            if(n%i==0){
                //cout<<i<<" "<<n/i<<endl;
                maxi=0, mini=LLONG_MAX;
                ll now=i;
                while(now<=n){

                    //cout<<i<<" IN "<<now<<" "<<n<<endl;
                    ll temp = v[now]-v[now-i];
                    //cout<<v[now]<<" "<<v[now-i]<<" "<<temp<<endl;
                    now+=i;
                    maxi=max(maxi,temp);
                    mini=min(mini,temp);
                }
                ll temp = abs(maxi-mini);
                ans=max(ans, temp);
                //cout<<maxi<<" "<<mini<<" "<<temp<<endl;


                maxi=0, mini=LLONG_MAX;
                ll j=n/i;
                now=j;
                //cout<<n<<" "<<j<<endl;
                while(now<=n){
                    //cout<<j<<" "<<now<<" "<<n<<endl;
                    ll temp = v[now]-v[now-j];
                    //cout<<v[now]<<" "<<v[now-j]<<" "<<temp<<endl;
                    now+=j;
                    maxi=max(maxi,temp);
                    mini=min(mini,temp);
                }
                temp = abs(maxi-mini);
                ans=max(ans, temp);
                //cout<<maxi<<" "<<mini<<" "<<temp<<endl;
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}
