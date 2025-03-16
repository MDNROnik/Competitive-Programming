#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test;cin>>test;
    while(test--){
        ll n,m,rc,cc,rd,cd;
        cin>>n>>m>>rc>>cc>>rd>>cd;
        ll ans=0;
        ll dr=1,cl=0;
        while(1){
            //cout<<rc<<" "<<cc<<endl;
            if(rc==rd || cc==cd){
                cout<<ans<<endl;break;
            }

            if(dr==1){
                if(rc+1>n){
                    dr=0;rc--;
                }
                else{rc++;}
            }
            else if(dr==0){
                if(rc-1 < 0){
                    dr=1;rc++;
                }
                else{
                    rc--;
                }
            }
            if(cl==1){
                if(cl-1 < 0){
                    cl=0;cc++;
                }
                else{
                    cc--;
                }
            }
            else if(cl==0){
                if(cc+1>m){
                    cl=1;cc--;
                }
                else{
                    cc++;
                }
            }
            ans++;
        }
    }
    return 0;
}
 