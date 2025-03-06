#include<bits/stdc++.h>
using namespace std;
#define int long long int
signed main(){
    int t;
    cin>>t;
    while(t--){
        int w,b;
        cin>>w>>b;
        int total=w+b;
        int l=1,r=sqrt(2*total)+1,res=0;
        while(l<=r){
            int m=(l+r)/2;
            int needed=m*(m+1)/2;
            if(needed<=total){
                res=m;
                l=m+1;
            }else{
                r=m-1;
            }
        }
        cout<<res<<endl;
    }
    return 0;
}