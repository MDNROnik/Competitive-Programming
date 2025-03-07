#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastIo() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
//bool prime[9000001];
////int n=9000000;
//map<ll,bool>mp;
//vector<ll>v;
//priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
//void sieve();
ll mod(ll x);
ll add(ll a,ll b);
ll mul(ll a,ll b);
ll modPow(ll x, ll y);
ll Pow(ll x, ll y);
ll setbit(ll num);
ll combination(ll num);
int isSubstring(string s1, string s2);
ll count( vector<ll>& arr, ll k ,ll ans) {
    ll count = 0;
    ll left = 0;
    ll currentSum = 0;
    ll maxx=0;
    //cout<<arr.size()<<endl;
    for (ll right = 0; right < arr.size()-ans; right++) {
        currentSum += arr[right];
        cout<<currentSum<<endl;
        while (currentSum > k) {
            currentSum -= arr[left];
            left++;
        }
        //cout<<(right - left + 1)<<endl;
        // For each right pointer position, count the subarrays ending at that position
        count = (right - left + 1);
        ans=max(count,ans);
    }

    return ans;
}

int main()
{
    //sieve();
    fastIo();
    ll test;
    cin>>test;
    while(test--)
    {
        ll n,k,total=0;
        cin>>n>>k;
        vector<ll>v;
        for(ll i=0; i<n; i++)
        {
            ll a;
            cin>>a;
            v.push_back(a);
        }

        sort(v.begin(),v.end());

        /*for(ll i=0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;*/
        total=v[0];ll i;

        for(i=0; i<n-1; )
        {
            while(v[i]==v[i+1] && i+1<n)
            {
                i++;
            }
            //cout<<v[i]<<" "<<v[i+1]<<endl;
            if(v[i]<v[i+1] && i+1<n)
            {
                //cout<<i<<" index "<<i+1<<endl;
                //cout<<v[i]<<" "<<v[i+1]<<endl;
                ll levelofwater=i+1;
                //cout<<levelofwater<<" "<<k<<endl<<endl;;
                ll level=v[i+1]-v[i];
                ll t=levelofwater*level;
                if(t<=k){
                    k-=t;
                    v[i]=v[i+1];
                }
                else if(t>k){
                    //v[i]+=k/levelofwater;
                    if(k<levelofwater){
                        break;
                    }
                    else{
                        v[i]+=k/levelofwater;
                        k=k%levelofwater;
                    }
                }
            }
        }

        total=v[i];
        //cout<<total<<endl;
        if(k>=n){
            total+=(k/n);
        }

        cout<<total<<endl;
    }

}
int isSubstring(string s1, string s2)
{
    if (s2.find(s1) != string::npos)
        return s2.find(s1);
    return -1;
}
ll combination(ll num)
{
    return (num*(num-1))/2;
}
ll setbit(ll num)
{
    ll c=0,shift=1;
    while(num!=0)
    {
        c++;
        num>>=shift;
    }
    return c;
}

//Mod Power
ll modPow(ll x, ll y)
{
    if(y==0)
        return 1LL;
    if(y==1)
        return mod(x);
    ll res=1;
    while(y)
    {
        if(y%2==1)
            res=mul(res,x);
        x=mul(x,x);
        y/=2;
    }
    return res;
}

//Power X of Y
ll Pow(ll x, ll y)
{
    if(y==0)
        return 1LL;
    if(y==1)
        return mod(x);
    ll res=1;
    while(y)
    {
        if(y%2==1)
            res*=x;
        x*=x;
        y/=2;
    }
    return res;
}

//Mod Of a Number
const ll m=1000000007;
ll mod(ll x)
{
    return ((x%m + m) % m);
}
//Mod Of Add
ll add(ll a,ll b)
{
    return mod( mod(a) + mod(b));
}
//Mod Of Multi
ll mul(ll a,ll b)
{
    return mod( mod(a) * mod(b));
}


/*void sieve()
{
    for(int i=2; i*i<=n; i++)
    {
        if(prime[i]==false)
        {
            for(int j=i*i; j<=n; j+=i)
            {
                prime[j]=true;
            }
        }
    }
    for(int i=2; i<=n; i++)
    {
        if(prime[i]==false)
        {
            //v.push_back(i);
            mp[i]=1;
        }
    }
}*/
 