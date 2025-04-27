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
            ll a;cin>>a;
            if(a==1){continue;}
            v.push_back(i+1);
        }
        int s = v.size();
        if( s>=2 && s%2==0 ){
            s/=2;
            s-=1;
            cout<<v[s]<<endl;
        }
        else if(v.size()==0){
            cout<<1<<endl;
        }
        else{

            cout<<-1<<endl;
        }


    }

    return 0;
}


