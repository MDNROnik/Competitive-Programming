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
        ll w, h;cin>>w>>h;
        ll now;
        cin>>now;
        vector<pair<ll,ll>>x1, x2, y1, y2;
        while(now--){
            ll a;cin>>a;
            x1.push_back({a, 0});
        }

        cin>>now;
        while(now--){
            ll a;cin>>a;
            x2.push_back({a, h});
        }

        cin>>now;
        while(now--){
            ll a;cin>>a;
            y1.push_back({0, a});
        }

        cin>>now;
        while(now--){
            ll a;cin>>a;
            y2.push_back({w, a});
        }
        ll ans=0;

        ll b1, b2, b3, b4, h1, h2, h3, h4;
        // for x1
        b1=x1[0].first;
        b2=x1[x1.size()-1].first;
        b3=x2[0].first;
        b4=x2[x2.size()-1].first;
        h1=0;
        h2=0;
        h3=h;
        h4=h;

        now = abs( (b1*(h2-h3)) + (b2*(h3-h1)) + (b3*(h1-h2)) );
        ans = max(now, ans);
        now = abs( (b1*(h2-h4)) + (b2*(h4-h1)) + (b4*(h1-h2)) );
        ans = max(now, ans);

        // for x2
        b1=x2[0].first;
        b2=x2[x2.size()-1].first;
        b3=x1[0].first;
        b4=x1[x1.size()-1].first;
        h1=h;
        h2=h;
        h3=0;
        h4=0;

        now = abs( (b1*(h2-h3)) + (b2*(h3-h1)) + (b3*(h1-h2)) );
        ans = max(now, ans);
        now = abs( (b1*(h2-h4)) + (b2*(h4-h1)) + (b4*(h1-h2)) );
        ans = max(now, ans);


        // for y1
        b1=0;
        b2=0;
        b3=w;
        b4=w;
        h1=y1[0].second;
        h2=y1[y1.size()-1].second;
        h3=y2[0].second;
        h4=y2[y2.size()-1].second;

        now = abs( (b1*(h2-h3)) + (b2*(h3-h1)) + (b3*(h1-h2)) );
        ans = max(now, ans);
        now = abs( (b1*(h2-h4)) + (b2*(h4-h1)) + (b4*(h1-h2)) );
        ans = max(now, ans);

        // for y2
        b1=w;
        b2=w;
        b3=0;
        b4=0;
        h1=y2[0].second;
        h2=y2[y2.size()-1].second;
        h3=y1[0].second;
        h4=y1[y1.size()-1].second;

        now = abs( (b1*(h2-h3)) + (b2*(h3-h1)) + (b3*(h1-h2)) );
        ans = max(now, ans);
        now = abs( (b1*(h2-h4)) + (b2*(h4-h1)) + (b4*(h1-h2)) );
        ans = max(now, ans);

        cout<<ans<<endl;

    }

    return 0;
}
