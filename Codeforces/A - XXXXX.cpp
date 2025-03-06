#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll test;
    cin>>test;
    while(test--)
    {
        int a,b;
        cin>>a>>b;
        vector<int>v;
        vector<int>pre,suf;
        for(int i=0;i<a;i++){
            ll t;cin>>t;
            v.push_back(t);
            if(i==0){pre.push_back(t);}
            else{
                t+=pre.back();
                pre.push_back(t);
            }
        }
        for(int i=a-1;i>=0;i--){
            if(i==a-1){
                suf.push_back(v[i]);
            }
            else{
                int t=v[i];
                t+=suf.back();
                suf.push_back(t);
            }
        }
        int ans=suf.back();
        if(ans%b!=0){
            cout<<a<<endl;continue;
        }
        int i=0,j=a-1;
        int maxi = INT_MIN;
        while(i<a){
            //int temp=ans-pre[i];
            //int temp2=ans-suf[j];
            //cout<<pre[i]<<" "<<suf[j]<<" "<<maxi<<endl;
            if(pre[i]%b!=0){
                //cout<<pre[i]<<endl;
                maxi= max(maxi, (i+1) );
            }
            if(suf[j]%b!=0){
                //cout<<suf[j]<<endl;
                maxi= max(maxi, (a-(a-j)+1 ) );
            }
            i++,j--;
        }
        if(maxi==INT_MIN){
            maxi=-1;
        }
        cout<<maxi<<endl;

    }
}
