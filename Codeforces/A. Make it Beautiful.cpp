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
        vector<int>v;
        ll last =0;
        for(int i=0;i<n;i++){
            if(i==n-1){
                cin>>last;break;
            }
            ll a;cin>>a;v.push_back(a);
        }
        v.insert(v.begin()+0, last);
        if(v[0]==v[1]){
            NO(1);
        }
        else{
            YES(1);
            for(int i=0;i<n;i++){
                cout<<v[i]<<" ";
            }
            cout<<endl;
        }
    }

    return 0;
}


