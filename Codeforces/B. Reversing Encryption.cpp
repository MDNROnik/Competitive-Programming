#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios_base::sync_with_stdio(false);
    ll n;cin>>n;
    string str;cin>>str;
    set<ll>s;
    set<ll>::iterator it;
    for(ll i=1;i<=sqrt(n);i++){
        if(n%i==0){
            s.insert(i-1);
            s.insert((n/i)-1);
        }
    }

    string str2;
    for(it=s.begin();it!=s.end();it++){
        //cout<<*it<<endl;
        for(ll i=*it;i>=0;i--){
            str2.push_back(str[i]);
        }
        for(ll i=*it+1;i<n;i++){
            str2.push_back(str[i]);
        }
        str=str2;
        str2.clear();
    }
    cout<<str<<endl;

    return 0;
}