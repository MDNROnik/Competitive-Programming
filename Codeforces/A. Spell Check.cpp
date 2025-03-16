#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;cin>>n;
    while(n--){
        ll si;cin>>si;
        string s;cin>>s;
        ll t=0,ii=0,m=0,u=0,r=0,o=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='T'){t++;}
            else if(s[i]=='i'){ii++;}
            else if(s[i]=='m'){m++;}
            else if(s[i]=='u'){u++;}
            else if(s[i]=='r'){r++;}
            else{
                o++;
            }
        }
        if(t==1 && ii==1 && m==1 && u==1 && r==1 && o==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
 