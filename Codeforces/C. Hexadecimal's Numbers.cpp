#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define fastIo() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
inline bool isBasedTwo(int n) {
    while (n) {
        if ((n % 10) > 1)
            return false;
        n /= 10;
    }
    return true;
}

int main()
{
    fastIo();
    ll n;cin>>n;
    ll count=1;
    ll i=11,extra=10;
    while(1){
        //cout<<i<<endl;
        if(i<=n){
            count=(count+count)+1;
            i*=10;i++;
            extra*=10;
        }
        else{
            //cout<<extra<<" "<<i<<endl;
            for(ll j=extra;j<=n && j<=i;j++){
                if(isBasedTwo(j)){
                    count++;
                }
            }
            break;
        }
    }
    if(n<10){count=1;}
    else if(n<=10){
        count=2;
    }
    else if(n<=11){
        count=3;
    }
    cout<<count<<endl;
    return 0;
}