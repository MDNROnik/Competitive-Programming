#include <bits/stdc++.h>
using namespace std;
#define ll long long
vector<ll>arr;
int main(){
    ll test;
    cin>>test;
    while(test--){
        map<int,int>mp;
        map<int,int>::iterator it;
        ll n,a,e=0,o=0;
        cin>>n;
        ll maxx=0;
        for(int i=0;i<n;i++){
            cin>>a;
             mp[a]++;
        }
        int count=0;
        for(it=mp.begin();it!=mp.end();it++){
            int temp=it->second;
            if(temp==n){count=0;break;}
            if(temp==1){count=1;break;}
        }

        int index=0;
        if(count==1 || n==1){cout<<-1<<endl;}
        else{
            for(it=mp.begin();it!=mp.end();it++){
                int temp=it->second;
                if(temp%2==0){
                    int t=index;
                    index+=temp;
                    int j=index;t++;
                    cout<<j<<" ";
                    for(int i=t;i<j;i++){
                        cout<<i<<" ";
                    }
                }
                else{
                    int t=index;
                    index+=temp;
                    int j=index;t++;
                    cout<<j<<" ";
                    for(int i=t;i<j;i++){
                        cout<<i<<" ";
                    }
                }
            }
            cout<<endl;
        }

    }
    return 0;
}