#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll n,k;cin>>n>>k;
    vector<int>vec(n);
    for(int i=0;i<n;i++){
        cin>>vec[i];
    }
    ll count=1;
    ll sum=0;
    while(count<=n){
        sum+=count;
        if(sum>=k){
            break;
        }
        count++;
    }
    if(sum==k){
        cout<<vec[count-1]<<endl;
    }
    else{
        while(sum>k){
            sum--;count--;
        }
        cout<<vec[count-1]<<endl;
    }
    return 0;
}
 