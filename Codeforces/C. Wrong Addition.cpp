#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define fastIo() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
void sieve();
ll mod(ll x);
ll add(ll a,ll b);
ll mul(ll a,ll b);
ll modPow(ll x, ll y);
ll Pow(ll x, ll y);
ll setbit(ll num);
ll combination(ll num);

int main()
{
    fastIo();
    ll test;
    cin>>test;
    while(test--)
    {
        string a,s;
        cin>>a>>s;
        if(a==s)
        {
            cout<<0<<endl;
            continue;
        }
        string b;
        reverse(s.begin(),s.end());
        reverse(a.begin(),a.end());
        ll j=0,c=0;
        for(ll i=0; i<a.size();)
        {
            ll t=a[i]-'0';
            ll t2=s[j]-'0';
            //cout<<t<<" "<<t2<<endl;
            if(t2>=t)
            {
                t2-=t;
                b.push_back(t2+'0');
                i++;
                j++;
            }
            else
            {
                //cout<<t<<" "<<t2<<endl;
                if(j+1<s.size())
                {
                    j++;
                    ll t3=s[j]-'0';
                    t3*=10;
                    t3+=t2;
                    t2=t3;
                    t2-=t;
                    //not reverse
                    stringstream ss;
                    ss<<t2;
                    string temp;
                    ss>>temp;
                    b.push_back(temp[0]);
                    if(temp.size()==2)
                    {
                        b.push_back(temp[1]);
                    }
                    i++;
                    j++;
                }
                else
                {
                    c++;
                    break;
                }
            }

        }
        if(c==1)
        {
            cout<<-1<<endl;
            continue;
        }
        while(j<s.size())
        {
            b.push_back(s[j]);
            j++;
        }
        //cout<<b<<endl;
        string ans;
        ll i=0;
        j=0;
        for(; i<a.size() && j<b.size(); i++,j++)
        {
            ll t=a[i]-'0';
            t+=b[i]-'0';
            stringstream ss;
            ss<<t;
            string temp;
            ss>>temp;
            reverse(temp.begin(),temp.end());
            ans+=temp;

        }
        while(i<a.size())
        {
            ans.push_back(a[i]);
            i++;
        }
        while(j<b.size())
        {
            ans.push_back(b[j]);
            j++;
        }

        reverse(ans.begin(),ans.end());
        //cout<<a<<" "<<b<<" "<<s<<" "<<ans<<endl;
        //cout<<ans<<endl;
        reverse(s.begin(),s.end());
        if(s==ans)
        {
            ll i=0;
            reverse(b.begin(),b.end());
            while(b[i]=='0')
            {
                i++;
            }
            if(b.size()==(i+1) && b[i]=='0')
            {
                cout<<0<<endl;
                continue;
            }
            for(; i<b.size(); i++)
            {
                cout<<b[i];
            }
            cout<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }

    }
    return 0;
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

//Seive
/*bool prime[90000001];
int n=90000000;
vector<ll>v;
ll temp=0;
map<ll,ll>mp;
void sieve()
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
        if(prime[i]==false){v.push_back(i);}
    }
}*/
 