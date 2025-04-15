#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;cin>>t;
    while(t--){
        ll n;cin>>n;
        string s;
        cin>>s;
        int ans=0;
        int em=0;
        for(int i=0;i<n;i++){
            if(s[i]=='.'){
                em++;
            }
            else{
                ans+=em;em=0;
            }
            if(em>2){
                em=0;ans=2;break;
            }
        }
        ans+=em;
        cout<<ans<<endl;
    }

}


