#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios_base::sync_with_stdio(false);
    ll n;cin>>n;
    vector<ll>vec(n);
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    map<ll,ll>mp;
    map<ll,ll>::iterator itp,itnp;
    ll odd=0,even=0;
    if(n%2!=0){cout<<-1<<endl;return 0;}
    vector<ll>v;
    for(int i=0;i<n;i++){
        itp = mp.find(abs(vec[i]));
        itnp = mp.find(vec[i]);

        if(vec[i]>0){
            if(itp == mp.end()){
                odd++;mp[vec[i]]++;
            }
            else{
                if(itp->second != 0){
                    cout<<-1<<endl;return 0;
                }
                else{
                    mp[vec[i]]++;odd++;
                }
            }
        }
        else if(vec[i]<0){
            if(itp == mp.end()){
                cout<<-1<<endl;return 0;
            }
            else{
                if(itp->second == 1){
                    itp->second++;odd--;even++;
                }
                else{
                    cout<<-1<<endl;return 0;
                }
            }
        }
        if(even*2 == i+1){
            v.push_back(i+1);
            mp.clear();
        }
    }
    if(odd!=0){cout<<-1<<endl;return 0;}
    vector<ll>v2;ll count=0;
    for(int i=0;i<v.size();i++){
        v2.push_back(v[i]-count);
        count=v[i];
    }
    cout<<v2.size()<<endl;
    for(int i=0;i<v2.size();i++){
        cout<<v2[i]<<" ";
    }
    cout<<endl;

    return 0;
}