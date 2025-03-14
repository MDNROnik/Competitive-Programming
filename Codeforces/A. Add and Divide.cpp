#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll test;cin>>test;
    while(test--){
        ll n,k;cin>>n>>k;
        ll maxx=INT_MAX;
        ll adi=0;
        if(n<k){
            cout<<1<<endl;continue;
        }
        else if(n==k){
            cout<<2<<endl;continue;
        }

        if(k==1){
            adi++;k++;
        }
        ll c=0;
        for(int i=k;;i++){
            ll tempcount=0;
            ll m=n;
            while(m>0){
                m/=i;
                tempcount++;
            }
            //cout<<tempcount<<" "<<c<<endl;
            if(maxx>(tempcount+c)){
                maxx=tempcount+c;
            }
            else if(maxx<tempcount+c){
                break;
            }
            c++;
        }
        cout<<maxx+adi<<endl;
    }
    return 0;
}