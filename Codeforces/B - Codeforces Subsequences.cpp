#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n;
    cin>>n;
    string str="codeforces";
    vector<ll>now;
    for(int i=10; i>=1; i--)
    {
        now.push_back(1);
    }
    int m=now.size();
    ll i=1,j=0,count=0;
    while( i<n )
    {
        //cout<<i<<" "<<n<<endl;
        for(int j=0; j<m; j++)
        {
            i=i/now[j];
            ++now[j];
            i*=now[j];
            if(i>=n)
            {
                break;
            }
        }
    }
    for(int i=0; i<str.size(); i++)
    {
        for(int j=0; j<now[i]; j++)
        {
            cout<<str[i];
        }
    }
    cout<<endl;

}
