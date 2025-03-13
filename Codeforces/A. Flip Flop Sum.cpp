#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define fastIo() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)

int main()
{
    fastIo();
    ll test;cin>>test;
    while(test--){
        ll n;cin>>n;
        ll ne=0,po=0;
        ll pre=0,c=0;
        while(n--){
            ll a;cin>>a;
            if(a==1){
                po++;
            }
            else{
                ne++;
            }
            //cout<<pre<<" "<<a<<endl;
            if(pre==-1 && a==-1){
                c=1;
            }
            pre=a;

        }
        //cout<<po<<" "<<ne<<endl;
        if(c==1){
            ne-=2;
            po+=2;
        }
        else if(ne==0){
            po-=2;
            ne+=2;
        }
        //cout<<po<<" "<<ne<<endl;
        cout<<po-ne<<endl;
    }
	return 0;
}
