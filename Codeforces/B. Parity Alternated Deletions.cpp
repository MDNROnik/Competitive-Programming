#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;cin>>n;
    vector<ll>e,o;
    ll sum=0;
    for(int i=0;i<n;i++){
        ll a;cin>>a;
        sum+=a;
        if(a%2==0){e.push_back(a);}
        else{
            o.push_back(a);
        }
    }
    sort(e.begin(),e.end());
    reverse(e.begin(),e.end());

    sort(o.begin(),o.end());
    reverse(o.begin(),o.end());

    ll s=min(o.size(),e.size());
    if(e.size()==o.size()){
        cout<<0<<endl;return 0;
    }
    if(s==0){
        if(e.size()!=0){
            cout<<sum-e[0]<<endl;
        }
        else if(o.size()!=0){
            cout<<sum-o[0]<<endl;
        }
        return 0;
    }
    s+=s;

    ll count=-1;
    if(o[0]>=e[0]){
        count=0;
    }
    else{
        count=1;
    }
    ll j=0,k=0;
    //cout<<s<<endl;
    for(int i=0;i<s;i+=2){
        sum-=o[j];j++;
        sum-=e[k];k++;
    }
    if(o.size()==j){
        sum-=e[k];cout<<sum<<endl;
    }
    else if(e.size()==k){
        sum-=o[j];cout<<sum<<endl;
    }
    else{
        if(o[j]>=e[k]){
            cout<<sum-o[j]<<endl;
        }
        else{
            cout<<sum-e[k]<<endl;
        }
    }


    return 0;
}