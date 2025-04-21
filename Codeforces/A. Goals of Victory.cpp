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
        n--;
        ll positive = 0, negative=0;
        while(n--){
            ll a;cin>>a;
            if(a>0){
                positive+=a;
            }
            else{
                negative+=(abs(a));
            }
        }
        if(positive>=negative){
            cout<<(negative-positive)<<endl;
        }
        else{
            cout<<(negative-positive)<<endl;
        }
    }

    return 0;
}