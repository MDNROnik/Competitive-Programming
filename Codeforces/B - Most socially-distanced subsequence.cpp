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
        cin>>a;
        vector<int>v,ans;
        for(int i=0;i<a;i++){
            ll t;cin>>t;
            v.push_back(t);

        }
        for(int i=0;i<a;i++){
            if(i==0 || i==a-1){
                ans.push_back(v[i]);
            }
            else if(v[i]<v[i-1] && v[i]<v[i+1]){
                ans.push_back(v[i]);
            }
            else if(v[i]>v[i-1] && v[i]>v[i+1]){
                ans.push_back(v[i]);
            }
        }

        int n=ans.size();
        cout<<n<<endl;
        for(int i=0;i<n;i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;

    }
}
