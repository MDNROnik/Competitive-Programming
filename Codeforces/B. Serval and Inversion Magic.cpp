#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fastIo() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)
int main()
{
    fastIo();
    ll test;cin>>test;
    while(test--){
        ll n;cin>>n;
        string s;cin>>s;
        ll i=0,j=n-1;
        ll c=0,count=0;
        while(i<j){
            if(s[i]==s[j] && c!=0){
                //cout<<i<<" "<<j<<endl;
                if(c>0){
                    c=0;
                    count++;
                }
            }
            else if(s[i]!=s[j]){
                c++;
            }
            i++;j--;
        }
        //cout<<count<<" "<<c<<endl;
        if(count==0 ){
            cout<<"Yes"<<endl;
        }
        else if(count==1 && c==0){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}