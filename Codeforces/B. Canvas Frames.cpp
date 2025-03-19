#include <bits/stdc++.h>
using namespace std;
#define intl long long
int main(){
    int n;
    cin>>n;
    int arr[n];
    map<int,int>mp;
    map<int,int>::iterator it;
    for(int i=0;i<n;i++){
        int a;cin>>a;
        ++mp[a];
    }

    int total=0;
    for(it=mp.begin();it!=mp.end();it++){
        //cout<<it->first<<" "<<it->second<<endl;
        int temp=it->second;
        if(temp%2==0){
            total+=temp;
        }
        else if(temp%2!=0 && temp>1){
            total+=(temp-1);
        }
    }
    cout<<total/4<<endl;

    return 0;
}