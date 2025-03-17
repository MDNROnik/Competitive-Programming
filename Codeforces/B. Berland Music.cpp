#include <bits/stdc++.h>
using namespace std;
#define ll long long
//const int N =1e7+10;
//long long arr[N];
map<int,int>mpx,mpy,mpa,mpb;
//map<int,int>::iterator it;
map<string ,int>mp,mp2;
map<pair<int,int>,int>::iterator it2;
int main(){
    ll test;
    cin >>test;
    while(test--){
        ll n;
        cin>>n;
        ll arr[n];
        for(ll i=0;i<n;i++){
            cin>>arr[i];
        }
        string s;
        cin>>s;
        map<int,int>m,m2;
        map<int,int>::reverse_iterator it;
        ll maxx=0,maxn=0,c=0;
        for(ll i=0;i<n;i++){
            if(s[i]=='1'){
                c++;
                m[arr[i]]=i;
                if(maxx<arr[i]){maxx=arr[i];}
            }
            if(s[i]=='0'){
                m2[arr[i]]=i;
                if(maxn<arr[i]){maxn=arr[i];}
            }
        }
        if(maxx>=maxn){
            maxn=maxx-c;
        }
        else{
            maxx=maxn;
            maxn=maxx-c;
        }
        for(it=m.rbegin();it!=m.rend();it++){
            //cout<<it->first<<" "<<it->second<<endl;
            arr[it->second]=maxx;
            maxx--;
        }
        for(it=m2.rbegin();it!=m2.rend();it++){
            //cout<<it->first<<" "<<it->second<<endl;
            arr[it->second]=maxn;
            maxn--;
        }
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}