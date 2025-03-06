#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll test;
    cin>>test;
    while(test--)
    {
        ll n;
        cin>>n;
        ll even=0, odd=0;
        vector<int>v;
        for(int i=0; i<n; i++)
        {
            ll a;
            cin>>a;
            if(i%2==0 && a%2!=0){
                odd++;
            }
            else if(i%2!=0 && a%2==0){
                even++;
            }
        }
        if(odd==even){
            cout<<odd<<endl;
        }
        else{
            cout<<-1<<endl;
        }

    }
}
