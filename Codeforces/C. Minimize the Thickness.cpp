#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    ios_base::sync_with_stdio(false);
    ll test;cin>>test;
    while(test--){
        ll n;cin>>n;
        vector<ll>vec(n);
        ll total=0;
        for(int i=0;i<n;i++){
            cin>>vec[i];total+=vec[i];
        }
        ll c=1;
        set<ll>res;
        set<ll>::iterator it;
        set<ll>v;
        while(c<=n){
            ll t;
            if(total%c==0){
                t=total/c;c++;
            }
            else{
                c++;
            }
            ll temp=0;
            ll count=0,j=1;
            for(int i=0;i<n;i++){
                temp+=vec[i];
                //cout<<temp<<" "<<t<<endl;
                if(temp < t){
                    //temp+=vec[i];
                }
                else if(temp==t){
                    v.insert(j);
                    //cout<<"HELLO "<<j<<endl;
                    j=0;temp=0;
                }
                else if(temp>t){
                    v.clear();break;
                }
                j++;
            }
            if(v.size()!=0){
               it=v.end();it--;
               //cout<<*it<<endl;
               res.insert(*it);v.clear();
            }
        }
        //cout<<res.size()<<endl;
        if(res.size()==1){
            it=res.begin();cout<<*it<<endl;
        }
        else{
            it=res.begin();
            cout<<*it<<endl;
        }
    }
}