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
        int n;
        char c;
        string s;
        cin>>n>>c>>s;
        if(c=='g') cout<<"0"<<endl;
        else
        {
            ll ans=0;
            s+=s;
            vector<int>g;
            ll count=0;
            for(int i=0; i<2*n; i++)
            {
                if(count>0){count++;}
                if(s[i]==c && count==0){
                    count++;
                }
                if(s[i]=='g') {
                    ans = max(ans,count);
                    //g.push_back(count);
                    count=0;
                }
            }
            cout<<ans-1<<endl;
        }
    }

    return 0;
}
