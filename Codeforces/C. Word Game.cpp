#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;cin>>n;
    while(n--){
        ll m;cin>>m;
        string s[m],s1[m],s2[m];
        map<string,ll>mp;
        ll p=0,p1=0,p2=0;
        for(int i=0;i<m;i++){
            cin>>s[i];mp[s[i]]++;
        }
        for(int i=0;i<m;i++){
            cin>>s1[i];mp[s1[i]]++;
        }
        for(int i=0;i<m;i++){
            cin>>s2[i];mp[s2[i]]++;
        }

        for(int i=0;i<m;i++){
            ll t=mp[s[i]];
            if(t==1){p+=3;}
            if(t==2){p+=1;}
        }
        for(int i=0;i<m;i++){
            ll t=mp[s1[i]];
            if(t==1){p1+=3;}
            if(t==2){p1+=1;}
        }
        for(int i=0;i<m;i++){
            ll t=mp[s2[i]];
            if(t==1){p2+=3;}
            if(t==2){p2+=1;}
        }
        cout<<p<<" "<<p1<<" "<<p2<<endl;
    }
    return 0;
}
 