#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;cin>>n;
    while(n--){
        ll m;cin>>m;
        string s,s1;
        cin>>s>>s1;
        ll sw=0;
        for(int i=0;i<m;i++){
            if(s[i]=='R'){
                if(s1[i]!='R'){sw=1;break;}
            }
            else if(s1[i]=='R'){
                if(s[i]!='R'){sw=1;break;}
            }
        }
        if(sw==1){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
}
 