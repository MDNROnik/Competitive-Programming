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
    ll d,sum,sums;
    cin>>d>>sum;
    sums=sum;
    vector<pair<ll,ll>>v;
    ll mi=0,ma=0;
    vector<ll>vec;
    for(int i=0; i<d; i++)
    {
        ll a,b;
        cin>>a>>b;
        vec.push_back(a);
        sum-=a;
        mi+=a;
        ma+=b;
        pair<ll,ll>p;
        p=make_pair(a,b);
        v.push_back(p);
    }
    if(ma < sums || mi > sums)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        //cout<<sum<<endl;
        for(int i=0; i<d; i++)
        {
            //cout<<sum<<endl;
            if(sum==0)
            {
                cout<<"YES"<<endl;
                for(int k=0; k<vec.size(); k++)
                {
                    cout<<vec[k]<<" ";
                }
                cout<<endl;
                return 0;
            }
            //cout<<vec[i]<<" "<<sum<<" "<<v[i].second<<endl;
            if(sum>v[i].second)
            {

                sum+=v[i].first;
                sum-=v[i].second;
                vec[i]=v[i].second;
            }
            else if(vec[i]+sum<=v[i].second)
            {
                //cout<<vec[i]<<" "<<sum<<" "<<v[i].second<<endl;
                vec[i]+=sum;
                sum=0;
            }
        }
        if(sum==0)
        {
            cout<<"YES"<<endl;
            for(int k=0; k<vec.size(); k++)
            {
                cout<<vec[k]<<" ";
            }
            cout<<endl;
            return 0;
        }
        cout<<"NO"<<endl;
    }

    return 0;
}