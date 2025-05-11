#include<bits/stdc++.h>
#define ll long long
using namespace std;

void Yes(int check){
    if(check){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"Yes"<<endl;
    }
}


void No(int check){
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
        ll n, x;cin>>n>>x;
        vector<ll>v;
        ll count = 0,count2=0;
        for(int i=0;i<n;i++){
            ll a;cin>>a;
            count2+=a;
            if(a%x==0){
                count+=a/x;
            }
            else{
                count+=(a/x)+1;
            }
        }
        if(count2%x==0){
            count2 = count2/x;
        }
        else{
            count2 = (count2/x)+1;
        }


        cout<<min(count, count2)<<" "<<max(count2, count)<<endl;

    }

    return 0;
}
