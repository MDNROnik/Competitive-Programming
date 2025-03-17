#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    long long arr[n];
    map<long long,long long>mp;
    map<long long,long long>::iterator it;
    for(int i=0;i<n;i++){
        long long a;cin>>a;
        mp[a]++;
    }
    it=mp.end();it--;
    long long t=it->first;
    long long c=it->second;
    it=mp.begin();
    long long t2=it->first;
    long long c2=it->second;
    if(mp.size()==1){
        cout<<0;
        long long i=1,sum=0;
        while(i<n){
            sum+=i;i++;
        }
        cout<<" "<<sum<<endl;
    }
    else{
        cout<<t-t2<<" "<<c*c2<<endl;
    }

    return 0;
}