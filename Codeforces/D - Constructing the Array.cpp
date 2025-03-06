#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;cin>>t;
    while(t--){
        ll n;cin>>n;
        set<pair<int,int>>s;

        vector<int>ans(n,0);
        map< int, set< pair<int,int> >,greater<int> >mp;
        mp[n].insert({1,n});

        int i=1;
        for(auto a=mp.begin(); a!=mp.end(); a++){

            vector<pair<int,int>> vc (a->second.begin(),a->second.end());

            for(int j=0;j<vc.size();j++){
                //cout<<a->first<<endl;
                int left=vc[j].first;
                int right=vc[j].second;
                int mid=left+right;
                //cout<<left<<" "<<mid/2<<" "<<right<<endl<<endl;
                mid/=2;
                int index=mid-1;
                ans[index]=i;i++;

                //cout<<left<<" test "<<mid-1<<endl;
                //cout<<mid+1<<" test "<<right<<endl<<endl;

                if(left<=(mid-1)){
                    mp[ ((mid-1)-left)+1 ].insert({left,mid-1});
                }
                if(right>=(mid+1)){
                        //cout<<(right+(mid+1))-1<<endl;
                    mp[ (right-(mid+1))+1 ].insert({mid+1,right});
                }
            }
        }

        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;

    }

}


