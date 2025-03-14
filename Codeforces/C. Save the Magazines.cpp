#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll test;cin>>test;
    while(test--){
        ll n;cin>>n;
        string s;cin>>s;
        vector<ll>vec;
        for(int i=0;i<n;i++){
            ll a;cin>>a;
            vec.push_back(a);
        }

        for(int i=0;i<n;){
            if(s[i]=='0' && s[i+1]=='1' && i+1<n){
                ll mini=INT_MAX;
                ll minindex=0,j;
                for(j=i+1;j<n;j++){
                    if(s[j]=='0'){
                        break;
                    }
                    else{
                        if(mini>vec[j]){
                            mini=vec[j];
                            minindex=j;
                        }
                    }
                }

                if(vec[i]>vec[minindex]){
                    swap(s[i],s[minindex]);
                }

                if(j==n){break;}
                i=j;
            }
            else{
                i++;
            }
        }
        //cout<<s<<endl;

        ll count=0;
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                count+=vec[i];
            }
        }
        cout<<count<<endl;
    }




    return 0;
}