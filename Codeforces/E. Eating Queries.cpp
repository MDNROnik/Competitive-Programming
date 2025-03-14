#include <bits/stdc++.h>
using namespace std;
#define ll long long
vector<string>arr;
map<int,int>mp;
map<int,int>::iterator it;
int main(){
    ll test;
    cin>>test;
    while(test--){
       int n,k;
       cin>>n>>k;
       vector<ll> arr(n);
       vector<ll>::iterator it;


       priority_queue<int> que;
       for(int i=0;i<n;i++){
        ll a;cin>>a;
        que.push(a);
       }

       map<ll,ll>mp;ll c=1;
       arr[0]=que.top();
       que.pop();
       ll i=0;
       mp[arr[i]]=c;
       while(!que.empty()){
        c++;i++;
        arr[i]=arr[i-1]+que.top();
        que.pop();
        mp[arr[i]]=c;
       }
       while(k--){
           int candi=1;
           int qu;cin>>qu;
           if(mp[qu]>0){
            cout<<mp[qu]<<endl;
           }
           else if(qu>arr[n-1]){
            cout<<-1<<endl;
            mp[qu]=-1;
           }
           else if(qu==arr[n-1]){
            cout<<n<<endl;
            mp[qu]=n;
           }
           else{
            it=lower_bound (arr.begin(), arr.end(), qu);
            //cout<<"BS"<<endl;
            cout<<(it-arr.begin())+1<<endl;
           }
       }
    }
    return 0;
}