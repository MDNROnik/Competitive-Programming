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
void fun(ll n, string &s, unordered_set<string> &visited){
    if(n<0){
        return;
    }

    if(visited.count(s)){
        return ;
    }
    //cout<<s<<endl;
    visited.insert(s);
    // last index
    char now = s[n];
    s.pop_back();
    fun(n-1, s, visited);
    s.push_back(now);

    // second last index
    if(n>=1){
        char now = s[n];
        s.pop_back();
        char now2 = s[n-1];
        s.pop_back();
        s.push_back(now);
        fun(n-1, s, visited);
        s.pop_back();
        s.push_back(now2);
        s.push_back(now);
    }
    return;
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
        string s;cin>>s;
        set<char>st;
        ll ans=0;
        for(ll i=0;i<n;i++){
            if(st.count(s[i])==0){
                ans+=(n-i);
                st.insert(s[i]);
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}
