#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll test;cin>>test;

    while(test--){
        ll n;cin>>n;
        vector<string>vec;
        map<string,ll>mp;
        map<string,ll>::iterator it;
        for(int i=0;i<n;i++){
            string a;cin>>a;
            vec.push_back(a);
            mp[a]++;
        }
        ll temp=1000;

        ll count=0;
        for(it=mp.begin();it!=mp.end();it++){
            if(it->second > 1){
                count+=(it->second-1);
            }
        }
        cout<<count<<endl;
        for(int i=0;i<n;i++){
            if(mp[vec[i]]>1){
                cout<<vec[i]<<endl;
                mp[vec[i]]=-1;
            }
            else if(mp[vec[i]]==1){
                cout<<vec[i]<<endl;
            }
            else if(mp[vec[i]]==-1){
                for(int j=0;j<4;j++){
                    ll c=0;
                    for(int k=48;k<=57;k++){
                        string ss=vec[i];
                        ss[j]=k;
                        it=mp.find(ss);
                        if(it==mp.end()){
                            mp[ss]++;
                            cout<<ss<<endl;c++;break;
                        }
                    }
                    if(c!=0){
                        break;
                    }
                }
            }
        }
    }





    return 0;
}
