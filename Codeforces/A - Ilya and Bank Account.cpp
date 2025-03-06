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
    if(n>=0)
    {
        cout<<n<<endl;
    }
    else
    {
        ll temp = n/10;
        ll now = n%10;
        ll temp2=temp;
        //cout<<temp2<<endl;
        temp2/=10;
        //cout<<temp2<<endl;
        temp2*=10;
        //cout<<temp2<<endl;
        temp2+=now;
        //cout<<temp<<" "<<temp2<<endl;
        if(temp>=temp2)
        {
            cout<<temp<<endl;
        }
        else
        {
            cout<<temp2<<endl;
        }
    }

}


