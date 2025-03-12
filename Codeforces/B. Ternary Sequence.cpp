#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll test;
    cin>>test;
    while(test--)
    {
        ll x,y,z;
        ll a,b,c;
        cin>>x>>y>>z;
        cin>>a>>b>>c;
        if(z==b){
            ll temp=z*2;
            c-=(min(c,x));
            y-=(min(a,y));
            temp-=(min(c,y)*2);
            cout<<temp<<endl;
        }
        else if(z<b){
            ll temp=z*2;
            b-=z;
            ll t=min(b,y);
            b-=t;y-=t;//temp+=t;
            t=min(y,a);
            y-=t;
            c-=(min(x,c));
            t=min(y,c);
            temp-=(t*2);
            cout<<temp<<endl;
        }
        else if(z>b){
            ll temp=min(z,b)*2;
            z-=b;
            x+=z;
            if(x>=c){
                cout<<temp<<endl;
            }
            else{
                c-=x;
                y-=(min(y,a));
                c=min(c,y);
                temp-=(c*2);
                cout<<temp<<endl;
            }
        }

    }
    return 0;
}