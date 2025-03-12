#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define fastIo() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)

int main()
{
    fastIo();
    ll n,m,k;
    cin>>n>>m>>k;
    m++;
    vector<string>vec;
    while(m--){
        ll a;cin>>a;
        string binary = std::bitset<20>(a).to_string();

        vec.push_back(binary);
    }
    //sort(vec.begin(),vec.end());
    ll count=0;
    for(int i=0;i<vec.size()-1;i++){
        ll c=0;
        for(int j=0;j<vec[i].size();j++){
            if(vec[i][j]!=vec[vec.size()-1][j]){
                c++;
                if(c>k){
                    break;
                }
            }
        }
        if(c<=k){count++;}
    }

    cout<<count<<endl;

    return 0;
}