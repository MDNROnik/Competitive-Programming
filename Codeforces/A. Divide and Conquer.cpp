#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test;cin>>test;
    while(test--){
        ll n;cin>>n;
        vector<ll>vec;
        ll sum=0;
        for(int i=0;i<n;i++){
            ll a;cin>>a;
            vec.push_back(a);
            sum+=a;
        }
        ll sum2=sum;
        sort(vec.begin(),vec.end());
        vector<ll>c;
        for(int i=0;i<n;i++){
            sum2=sum;
            ll num=vec[i];
            ll count=0;
            while(1){
                if(sum2%2==0){
                    c.push_back(count);break;
                }
                sum2-=num;
                num/=2;
                sum2+=num;
                count++;
            }
        }
        sort(c.begin(),c.end());
        cout<<c[0]<<endl;
    }
    return 0;
}