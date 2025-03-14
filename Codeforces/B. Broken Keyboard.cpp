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
       ll n;cin>>n;
       string s;cin>>s;
       ll oc=0,ec=1,c=0;
       for(int i=0;i<s.size();){
        //cout<<s[i]<<" "<<i<<endl;
        //cout<<oc<<endl;
        if(oc==0){
            i++;
            ec=0;oc=1;
            //cout<<s[i]<<endl;
        }
        else if(ec==0){
            if(s[i]==s[i+1] && i+1<n){

            }
            else if(s[i]!=s[i+1]){
                c++;break;
            }
            //cout<<s[i]<<" "<<s[i+1]<<endl;
            i++;i++;//cout<<i<<endl;
            oc=0;ec=1;
        }
       }
       if(c==1){
        cout<<"NO"<<endl;
       }
       else{
        cout<<"YES"<<endl;
       }

    }
    return 0;
}