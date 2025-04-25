#include<bits/stdc++.h>
#define ll long long
using namespace std;

void YES(int check){
    if(check){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"Yes"<<endl;
    }
}
void NO(int check){
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
        ll n;cin>>n;
        vector<ll>a,b,c;
        ll m = INT_MAX;
        for(int i=0;i<n;i++){
            ll temp;cin>>temp;
            a.push_back(temp);
            m=min(m, temp);
        }
        for(int i=0;i<n;i++){
            if(a[i]==m){
                b.push_back(a[i]);
            }
            else{
                c.push_back(a[i]);
            }
        }
        m=b.size();
        if(n==m){
            cout<<-1<<endl;
        }
        else{
            cout<<m<<" "<<n-m<<endl;
            for(int i=0;i<m;i++){
                cout<<b[i]<<" ";
            }
            cout<<endl;
            for(int i=0;i<n-m;i++){
                cout<<c[i]<<" ";
            }
            cout<<endl;
        }

    }

    return 0;
}


