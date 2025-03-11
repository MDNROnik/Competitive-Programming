#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define fastIo() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
//bool prime[1000001];
//ll n=1000000;
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
    sieve();
    ll test;
    cin>>test;
    while(test--)
    {
        ll n;cin>>n;
        string s;cin>>s;
        ll i=0,j=n-1;
        while(i<j){
            //cout<<i<<" "<<j<<endl;
            if(s[i]!=s[j]){
                break;
            }
            i++;j--;
        }
        if(s[i]==s[j]){
            cout<<0<<endl;continue;
        }

        map<ll,ll>mp;
        ll j2=j;
        while(j2>=i){
            //cout<<s[i]<<" "<<s[j2]<<endl;
            if(s[j2]==s[i]){
                break;
            }
            mp[ s[ j2 ] ];j2--;
        }

        map<ll,ll>mp2;
        ll i2=i,count=0,count2=0;
        while(i2<=j){
            if(s[i2]==s[j]){
                break;
            }
            mp2[ s[i2] ];i2++;
        }
        //cout<<mp.size()<<" "<<mp2.size()<<endl;
        if(mp.size()>1 && mp2.size()>1){
            cout<<-1<<endl;
        }
        else if(mp.size()==1 && mp2.size()==1){
            ll ii=i,jj=j;
            ll out=0,out2=0;
            if(mp.size()==1){
                char c=s[jj];
                while(ii<jj){
                    if(s[ii]==s[jj]){
                        ii++;jj--;
                    }
                    else{
                        if(s[ii]==c){
                            ii++;count++;
                        }
                        else if(s[jj]==c){
                            jj--;count++;
                        }
                        else{
                            out++;count=0;break;
                        }
                    }
                }
                //cout<<count<<endl;
            }
            if(mp2.size()==1){
                char c=s[i];
                while(i<j){
                    if(s[i]==s[j]){
                        i++;j--;
                    }
                    else{
                        if(s[i]==c){
                            i++;count2++;
                        }
                        else if(s[j]==c){
                            j--;count2++;
                        }
                        else{
                            out2++;count2=0;break;
                        }
                    }
                }
            }
            //cout<<out<<" "<<out2<<endl;
            //cout<<count<<" "<<count2<<endl;
            if(out>0 && out2>0){
                cout<<-1<<endl;continue;
            }
            if(count==0){
                if(out2>0){
                    cout<<-1<<endl;continue;
                }
                cout<<count2<<endl;continue;
            }
            if(count2==0){
                if(out>0){
                    cout<<-1<<endl;continue;
                }
                cout<<count<<endl;continue;
            }
            cout<<  min(count,count2)  <<endl;
        }
        else if(mp.size()==1){
            ll ii=i,jj=j;
            ll out=0,out2=0;
            if(mp.size()==1){
                char c=s[jj];
                while(ii<jj){
                    if(s[ii]==s[jj]){
                        ii++;jj--;
                    }
                    else{
                        if(s[ii]==c){
                            ii++;count++;
                        }
                        else if(s[jj]==c){
                            jj--;count++;
                        }
                        else{
                            out++;count=0;break;
                        }
                    }
                }
                //cout<<count<<endl;
            }
            if(out>0 || count==0){
                cout<<-1<<endl;
            }
            else{
                cout<<count<<endl;
            }
        }
        else{
            ll out2=0,count2=0;
            if(mp2.size()==1){
                char c=s[i];
                while(i<j){
                    if(s[i]==s[j]){
                        i++;j--;
                    }
                    else{
                        if(s[i]==c){
                            i++;count2++;
                        }
                        else if(s[j]==c){
                            j--;count2++;
                        }
                        else{
                            out2++;count2=0;break;
                        }
                    }
                }
            }
            if(out2>0 || count2==0){
                cout<<-1<<endl;
            }
            else{
                cout<<count2<<endl;
            }
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

void sieve()
{
    /*for(ll i=2; i*i<=n; i++)
    {
        if(prime[i]==false)
        {
            for(ll j=i*i; j<=n; j+=i)
            {
                prime[j]=true;
            }
        }
    }
    for(int i=2; i<=n; i++)
    {
        if(prime[i]==false){v.push_back(i);}
    }
    */
}


 