#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test;cin>>test;
    while(test--){
        ll n;cin>>n;
        vector<ll>v;
        ll n2=n;
        map<ll,ll>mp;
        while(n>0){
            //cout<<n<<endl;
            if(n>=9 && mp[9]<1){
                v.push_back(9);n-=9;mp[9]++;
            }
            else if(n>=8 && mp[8]<1){
                v.push_back(8);n-=8;mp[8]++;
            }
            else if(n>=7 && mp[7]<1){
                v.push_back(7);n-=7;mp[7]++;
            }
            else if(n>=6 && mp[6]<1){
                v.push_back(6);n-=6;mp[6]++;
            }
            else if(n>=5 && mp[5]<1){
                v.push_back(5);n-=5;mp[5]++;
            }
            else if(n>=4 && mp[4]<1){
                v.push_back(4);n-=4;mp[4]++;
            }
            else if(n>=3 && mp[3]<1){
                v.push_back(3);n-=3;mp[3]++;
            }
            else if(n>=2 && mp[2]<1){
                v.push_back(2);n-=2;mp[2]++;
            }
            else if(n>=1 && mp[1]<1){
                v.push_back(1);n-=1;mp[1]++;
            }
            else{
                break;
            }
        }
        sort(v.begin(),v.end());
        ll sum=0;
        for(int i=0;i<v.size();i++){
            sum+=v[i];
        }
        //cout<<sum<<" "<<n2<<endl;
        if(sum>n2 || sum<n2){
            cout<<-1<<endl;
        }
        else{
            for(int i=0;i<v.size();i++){
                cout<<v[i];
            }
            cout<<endl;
        }
    }
    return 0;
}