#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define fastIo() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test;
    cin>>test;
    while(test--)
    {
        ll n;
        cin>>n;
        vector<ll>v;
        for(int i=0; i<n; i++)
        {
            ll a;
            cin>>a;
            v.push_back(a);
        }
        ll pos=0;
        for(int i=0; i<n; i++)
        {
            //cout<<pos<<endl;
            if(v[i]>=0)
            {
                pos+=v[i];
            }
            else
            {
                //cout<<v[i]<<endl;
                if(pos>=v[i] && pos!=0)
                {
                    v[i]=abs(v[i]);
                    if(pos>=v[i]){
                        pos-=v[i];
                    }
                    else{
                        pos=0;
                    }
                }
                else
                {
                    pos=0;
                }
            }
            //cout<<pos<<endl;
        }
        cout<<pos<<endl;
    }
    return 0;
}