#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;cin>>n;
    vector<ll>v;
    ll c=0;
    for(int i=0;i<n;i++){
        ll a;cin>>a;
        c+=a;
        if(i==0){
            v.push_back(c);
        }
        else{
            v.push_back(c);
        }
    }
    ll q;cin>>q;
    while(q--){
        ll a;cin>>a;
        ll i=0,j=v.size()-1;
        while(i<j){
            ll mid=j+i;
            mid/=2;
            if(v[mid]==a){
                cout<<mid+1<<endl;break;
            }
            if(v[mid]<=a && mid==v.size()-1){
                cout<<mid+1<<endl;break;
            }
            if(v[mid]>=a && mid==0){
                cout<<mid+1<<endl;break;
            }
            if(v[mid]<a && v[mid+1]>a){
                cout<<mid+2<<endl;break;
            }
            if(v[mid]>a && v[mid-1]<a){
                cout<<mid+1<<endl;break;
            }
            if(v[mid]>a){
                j=mid;
            }
            else{
                i=mid;
            }
            if(abs(i-j)==1){
                if(v[i]>=a){
                    cout<<i+1<<endl;
                }
                else{
                    cout<<j+1<<endl;
                }
                break;
            }
        }

    }

    return 0;
}