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
        ll a,b,c;
        cin>>a>>b>>c;
        if(c%2==0){
            if(a>b){
                cout<<"First"<<endl;
            }
            else{
                cout<<"Second"<<endl;
            }
        }
        else{
            if(b>a){
                cout<<"Second"<<endl;
            }
            else{
                cout<<"First"<<endl;
            }
        }
    }

    return 0;
}


