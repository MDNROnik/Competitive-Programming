#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll fun(ll x1, ll y1, ll x2, ll y2, ll x3, ll y3){
    if(y1==y2){
        //cout<<111<<endl;
        if(y3<y1){
            return abs(x1-x2);
        }
        return 0;
    }
    else{
        return 0;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;
    cin>>t;
    while(t--)
    {
        ll a1, a2, b1, b2, c1, c2;
        cin>>a1>>a2>>b1>>b2>>c1>>c2;
        ll ans=0;
        ans+=fun(a1,a2,b1,b2,c1,c2);
        //cout<<ans<<endl;
        ans+=fun(b1,b2,c1,c2,a1,a2);
        ans+=fun(c1,c2,a1,a2,b1,b2);

        cout<<ans<<endl;

    }

}


