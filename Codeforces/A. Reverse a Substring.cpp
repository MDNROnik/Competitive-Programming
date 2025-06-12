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
    ll n;cin>>n;
    string s;cin>>s;
    string str = s;
    ll count=0, count2=0;
    for(int i=1;i<n;i++){
        if(s[count]<s[i]){
            count=i;
        }
        else if(s[count]==s[i]){
            continue;
        }
        else{
            count+=1;
            count2=i+1;break;
        }
    }
    if(count2==0){
        No(1);
    }
    else{
        Yes(1);
        cout<<count<<" "<<count2<<endl;
    }

    return 0;
}
