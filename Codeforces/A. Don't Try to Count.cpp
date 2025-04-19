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
        ll n, m;cin>>n>>m;
        string x,s;cin>>x>>s;
        int ans = 0, count=0;
        while(count<10){
            for(int i=0;i<n;i++){
                if(i+m <= n){
                    int now = 0;
                    for(int j=0;j<m;j++){
                        if(x[i+j] != s[j]){now++;break;}
                    }
                    if(now==0){ans++;break;}
                }
                else{
                    break;
                }
            }
            if(ans==1){break;}
            x+=x;
            n+=n;
            count++;
        }
        //cout<<"ans"<<endl;
        if(ans==1){
            cout<<count<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }

    return 0;
}


