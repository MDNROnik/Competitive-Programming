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
        ll a,b;
        cin>>a>>b;
        if(a < b)swap(a,b);
        if(a % b)
        {
            cout<<-1<<endl;
            continue;
        }
        ll x = a / b;
        ll cnt = 0;
        while(1)
        {
            if(x % 8 == 0)x /= 8;
            else if(x % 4 == 0)x /= 4;
            else if(x % 2 == 0)x /= 2;
            else break;
            cnt++;
        }
        if(x == 1)cout<< cnt <<endl;
        else cout<<-1<<endl;;
    }
}


