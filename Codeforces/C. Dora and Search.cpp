#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define fastIo() ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr)

bool solve(vector<pair<ll,ll>>v,ll d,ll sum,ll i,ll now,vector<ll>vec)
{
    //cout<<i<<endl;
    if(i+1==d )
    {
        //cout<<i<<endl;
        //cout<<vec.size()<<endl;
        /*for(int j=v[i].first;j<=v[i].second;j++){
            if(now+j==sum){
                vec.push_back(j);
                cout<<"YES"<<endl;
                for(int k=0;k<vec.size();k++){
                    cout<<vec[k]<<" ";
                }
                cout<<endl;
                return 1;
            }
        }
        return 0;*/
        ll temp=sum-now;
        if(v[i].first<=temp && v[i].second>=temp)
        {
            vec.push_back(temp);
            cout<<"YES"<<endl;
            for(int k=0; k<vec.size(); k++)
            {
                cout<<vec[k]<<" ";
            }
            cout<<endl;
            return 1;
        }
        return 0;
    }
    for(int j=v[i].first; j<=v[i].second; j++)
    {
        //cout<<i<<" "<<j<<endl;
        if(now+j > sum)
        {
            continue;
        }
        vec.push_back(j);
        if(solve(v,d,sum,i+1,now+j,vec)==0)
        {
            vec.pop_back();
        }
        else
        {
            return 1;
        }
    }
    return 0;
}


int main()
{
    fastIo();
    ll test;cin>>test;
    while(test--){
        ll n;cin>>n;
        vector<ll>vec;
        for(ll i=0;i<n;i++){
            ll a;cin>>a;
            vec.push_back(a);
        }
        ll mi=1,ma=n;
        ll l=0,r=n-1;
        ll count=0;
        while(l<r){
            //cout<<mi<<" loop "<<ma<<endl;
            //cout<<l<<" index "<<r<<endl;
            if(vec[l]!=mi && vec[l]!=ma && vec[r]!=ma && vec[r]!=mi){
                //cout<<vec[l]<<" "<<mi<<endl;
                //cout<<vec[l]<<" "<<ma<<endl;
                //cout<<vec[r]<<" "<<ma<<endl;
                //cout<<vec[r]<<" "<<mi<<endl;
                count++;break;
            }
            else if(vec[l]==mi){
                mi++;l++;
            }
            else if(vec[l]==ma){
                ma--;l++;
            }
            else if(vec[r]==mi){
                mi++;r--;
            }
            else if(vec[r]==ma){
                ma--;r--;
            }
        }
        if(count==0){
            cout<<-1<<endl;
        }
        else{
            cout<<l+1<<" "<<r+1<<endl;
        }
    }

    return 0;
}