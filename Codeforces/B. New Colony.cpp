#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll test;
    cin>>test;
    while(test--)
    {
        ll n,x;
        cin>>n>>x;
        vector<ll>v;
        for(int i=0; i<n; i++)
        {
            ll a;
            cin>>a;
            v.push_back(a);
        }
        if(n==1)
        {
            cout<<-1<<endl;
            continue;
        }
        vector<ll>vec;
        while(x>0)
        {
            for(int i=1; i<n; i++)
            {
                //cout<<x<<endl;
                //cout<<x<<endl;
                //cout<<v[i-1]<<" "<<v[i]<<endl;
                //cout<<i<<" "<<i+1<<endl;
                if(x==0)
                {
                    break;
                }
                if(v[i-1] < v[i])
                {
                    v[i-1]++;x--;
                    vec.push_back(i);
                    if(x==0){break;}
                    //cout<<x<<endl;
                    //cout<<v[i-1]<<" "<<v[i]<<endl;
                    //cout<<i<<" "<<i+1<<endl<<endl;;
                    /*ll temp=v[i]-v[i-1];
                    //cout<<temp<<endl;
                    if(temp<=x)
                    {
                        x-=temp;
                        v[i-1]+=temp;
                        vec.push_back(i);
                    }
                    else
                    {
                        x=0;
                        vec.push_back(i);
                    }*/
                    break;
                }
                else if(i==n-1 && v[i-1]>=v[i])
                {
                    //cout<<x<<endl;
                    //cout<<v[i-1]<<" "<<v[i]<<endl;
                    //cout<<i<<" "<<i+1<<endl<<endl;;
                    vec.push_back(i+1);
                    x=0;

                }
            }
        }

        if(vec[vec.size()-1]==n)
        {
            cout<<"-1"<<endl;
        }
        else
        {
            cout<<vec[vec.size()-1]<<endl;
        }
    }
    return 0;
}