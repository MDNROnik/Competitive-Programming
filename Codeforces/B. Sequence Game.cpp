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
        vector<ll>v;
        for(int i=0;i<n;i++){
            ll a;cin>>a;
            v.push_back(a);
        }
        vector<ll>vs;
        vs.push_back(v[0]);
        ll ind = 0;
        for(int i=1;i<n;i++){
            int pre = vs[ind];
            int now = v[i];
            if(pre<=now){
                vs.push_back(now);ind++;
            }
            else{
                vs.push_back(now);
                vs.push_back(now);
                ind+=2;
            }
        }


        ll m=vs.size();

        cout<<m<<endl;
        for(int i=0;i<m;i++){
            cout<<vs[i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}


