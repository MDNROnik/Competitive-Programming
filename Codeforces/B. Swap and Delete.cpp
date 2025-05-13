#include<bits/stdc++.h>
#define ll long long
using namespace std;

void Yes(int check){
    if(check){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"Yes"<<endl;
    }
}


void No(int check){
    if(check){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;cin>>t;
    while(t--){
        string s;
        cin>>s;
        ll zero=0, one=0, n=s.size();
        for(ll i=0;i<n;i++){
            if(s[i]=='0'){zero++;}
            else{
                one++;
            }
        }
        ll ans=0;
        for(ll i=0;i<n;i++){
            if(s[i]=='0' && one>0){
                one--;
                continue;
            }
            else if(s[i]=='1' && zero>0){
                zero--;
                continue;
            }
            else{
                ans+=(one+zero);break;
            }
        }
        cout<<ans<<endl;

    }

    return 0;
}
