#include<bits/stdc++.h>
using namespace std;
#define ll long long
//unsigned ll n = std::bitset<32>(s).to_ulong(); //for string_binary to decimal
bool fun(vector<ll>&v,ll i,ll sum,ll k,ll c){
  if(sum%2!=0 && k==c){
    //cout<<sum<<endl;
    return 1;
  }
  else if(i==v.size()){
    return 0;
  }
  if(fun(v,i+1,sum,k,c)){
    return 1;
  }
  if(fun(v,i+1,sum+v[i],k,c+1)){
    return 1;
  }
  return 0;
}
 
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test;
    cin>>test;
    while(test--){
      ll n,k;cin>>n>>k;
      ll odd=0,even=0;
      for(int i=0;i<n;i++){
        ll a;cin>>a;
        if(a%2==0){
          even++;
        }
        else{
          odd++;
        }
      }
      if(odd==0){
        cout<<"No"<<endl;continue;
      }
      else{
        if(odd%2==0){
          odd--;
            if(k%2!=0 && k<=odd){
              cout<<"Yes"<<endl;
            }
            else if(k%2!=0 && k>odd && ((k-odd) <=even)){
              cout<<"Yes"<<endl;
            }
            else if(k%2==0 && k<odd && even>=1){
              cout<<"Yes"<<endl;
            }
            else if(k%2==0 && k>odd && ((k-odd) <=even)){
              cout<<"Yes"<<endl;
            }
            else{
              cout<<"No"<<endl;
            }
        }
        else if(odd%2!=0){
          if(k%2!=0 && k<=odd){
            cout<<"Yes"<<endl;
          }
          else if(k%2!=0 && k>odd && ((k-odd) <=even)){
            cout<<"Yes"<<endl;
          }
          else if(k%2==0 && k<odd && even>=1){
            cout<<"Yes"<<endl;
          }
          else if(k%2==0 && k>odd && ((k-odd) <=even)){
            cout<<"Yes"<<endl;
          }
          else{
            cout<<"No"<<endl;
          }
        }
      }
    }
    return 0;
}