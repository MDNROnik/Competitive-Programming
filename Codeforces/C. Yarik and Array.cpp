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
        ll sum=0;
        vector<ll>v;
        ll active=0,pre=-1;
        ll maxi=INT_MIN;
        for(ll i=0;i<n;i++){
            ll a;cin>>a;
            maxi = max(maxi, a);
            if(active==0 && a>0){
                active=1;
                sum=0;
                v.clear();
            }
            if(active){
                ll now = (abs(a)%2);
                //cout<<a<<" "<<now<<" "<<pre<<endl;
                if(now!=pre){
                    pre = now;
                    sum+=a;
                    maxi=max(maxi, sum);
                    v.push_back(a);
                }
                else{
                    ll temp = maxSubArray(v);
                    maxi = max(temp, maxi);
                    v.clear();
                    if(a>0){
                        active=1;
                        sum=a;
                        pre=now;
                        v.push_back(a);
                    }
                    else{
                        active=0;
                        sum=0;
                        pre=-1;

                    }
                }

            }

        }
        if(v.size()>0){
            ll temp = maxSubArray(v);
            maxi = max(temp, maxi);
        }
        cout<<maxi<<endl;
    }

    return 0;
}
