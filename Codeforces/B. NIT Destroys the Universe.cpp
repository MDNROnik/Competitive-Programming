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
        ll n;cin>>n;
        ll count = 0, flag = 0;
        for(int i=0;i<n;i++){
            ll a;cin>>a;
            if(a==0){
                flag=0;
            }
            else{
                flag++;
                if(flag==1){
                    count++;
                }
            }
        }
        if(count>1){count=2;}
        cout<<count<<endl;

    }

    return 0;
}

 