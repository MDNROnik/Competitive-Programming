#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n;
    cin>>n;
    vector<int>v;
    for(int i=0; i<n; i++)
    {
        ll a;
        cin>>a;
        v.push_back(a);
    }
    string s;
    cin>>s;
    ll ans=1;
    for(int i=0; i<n-1; i++)
    {
        if(s[i]=='1')
        {
            ll count=0;
            ll tempi=i,tempj;
            for(int j=i; j<n-1; j++)
            {
                tempj=j;i=j;
                if(s[j]=='1')
                {
                    count++;
                }
                else
                {
                    tempj=j;
                    i=j;
                    break;
                }
            }
            if(s[i]=='1'){
                tempj++;
            }
            //cout<<tempi<<" "<<tempj<<endl;
            sort(v.begin()+tempi, v.begin()+tempj+1);
            /*if(v[tempi]!=tempi+1 || v[tempj]!=tempj+1){
                ans=0;break;
            }*/
            if(tempj==n || tempj==n-1)
            {
                break;
            }
        }
        else{
            //cout<<v[i]<<endl;
            if(v[i]!=i+1){
                ans=0;break;
            }
        }
    }


    for(int i=0; i<v.size()-1; i++)
    {
        //cout<<v[i]<<" "<<v[i+1]<<endl;
        if(v[i]<=v[i+1])
        {

        }
        else
        {
            ans=0;
            break;
        }
    }
    if(ans)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}
