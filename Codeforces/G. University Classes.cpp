#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
  ll n,m;cin>>n;
  string s[n];
  for(int i=0;i<n;i++){
    cin>>s[i];
  }
  ll count=0;
  for(int j=0;j<7;j++){
    ll maxx=0;
    for(int i=0;i<n;i++){
      if(s[i][j]=='1'){
        maxx++;
      }
    }
    if(maxx>count){
      count=maxx;
    }
    if(count==n){
      break;
    }
  }
  cout<<count<<endl;
  return 0;
}