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
        vector<string>vs;
        for(int i=0;i<10;i++){
            string s;cin>>s;
            vs.push_back(s);
        }
        ll ans=0;
        for(int i=0;i<10;i++){
            for(int j=0;j<10;j++){
                if(vs[i][j]=='X'){
                    //cout<<i<<" "<<j<<endl;
                    int row=i;
                    int col = j;
                    if(row>=5){
                        row = 9-row;
                    }
                    if(col>=5){
                        col = 9-col;
                    }
                    ans += min(row, col)+1;
                }
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}
