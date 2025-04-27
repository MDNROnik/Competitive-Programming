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
        ll last = 0;
        for(int i=0;i<n;i++){
            int a;cin>>a;
            v.push_back(a);
        }
        sort(v.begin(), v.end());
        ll count=0,ans=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int gcd = __gcd(v[i], v[j]);
                if(gcd<=2){
                    ans++;break;
                }
            }
            if(ans==1){break;}
        }
        if(ans==1){
            YES(0);
        }

        else{
            NO(0);
        }


    }

    return 0;
}


