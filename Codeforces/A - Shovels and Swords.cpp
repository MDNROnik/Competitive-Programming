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
        ll total=0;
        if(2*a<=b){
            total=a;
        }
        else if(2*b<=a){
            total=b;
        }
        else {
            total=a+b;
            total/=3;
        }
        cout<<total<<endl;

    }
}
