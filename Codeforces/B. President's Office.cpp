#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define fastIo() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)

int main()
{
    fastIo();
    string r;
    ll n,m;cin>>n>>m;
    cin>>r;
    //cout<<n<<m<<r<<endl;
    vector<string>vec;
    for(int i=0;i<n;i++){
        string s;cin>>s;
        vec.push_back(s);
    }
    ll total=0;
    map<char,ll>mp;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            //cout<<i<<" "<<j<<endl;
            if(vec[i][j] == r[0]){
                //cout<<"HELLO"<<endl;
                if(i-1>=0 && vec[i-1][j]!=r[0] && vec[i-1][j]!='.'){
                    mp[vec[i-1][j]]++;
                    //cout<<"UP"<<endl;
                }
                if(i+1<n && vec[i+1][j]!=r[0] && vec[i+1][j]!='.'){
                    mp[vec[i+1][j]]++;
                    //cout<<"DOWN"<<endl;
                }
                if(j-1>=0 && vec[i][j-1]!=r[0] && vec[i][j-1]!='.'){
                    mp[vec[i][j-1]]++;
                    //cout<<"LEFT"<<endl;
                }
                if(j+1<m && vec[i][j+1]!=r[0] && vec[i][j+1]!='.'){
                    mp[vec[i][j+1]]++;
                    //cout<<"RIGHT"<<endl;
                }
                //cout<<"HELLO"<<endl;
            }
        }
        //cout<<i<<endl;
    }
    cout<<mp.size()<<endl;

    return 0;
}