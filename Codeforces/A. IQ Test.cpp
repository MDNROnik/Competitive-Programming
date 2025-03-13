#include<bits/stdc++.h>
using namespace std;
#define ll long long
//ll n=1e+9;
int main(){
    vector<string>vec;
    for(int i=0;i<4;i++){
        string s;cin>>s;
        vec.push_back(s);
    }
    for(int i=0;i<3;i++){
        ll count=0;
        for(int j=0;j<3;j++){
            if(vec[i][j]=='#'){
                count++;
            }
            if(vec[i][j+1]=='#'){
                count++;
            }
            if(vec[i+1][j]=='#'){
                count++;
            }
            if(vec[i+1][j+1]=='#'){
                count++;
            }
            if(count==3 || count==4){
                cout<<"YES"<<endl;return 0;
            }
            count=0;
            if(vec[i][j]=='.'){
                count++;
            }
            if(vec[i][j+1]=='.'){
                count++;
            }
            if(vec[i+1][j]=='.'){
                count++;
            }
            if(vec[i+1][j+1]=='.'){
                count++;
            }
            if(count==3 || count==4){
                cout<<"YES"<<endl;return 0;
            }
            count=0;
        }
    }
    cout<<"NO"<<endl;
    return 0;
}
