#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll test;
    cin>>test;
    while(test--)
    {
        ll n,m;
        cin>>n>>m;
        vector<string>vs;
        for(int i=0; i<n; i++)
        {
            string s;
            cin>>s;
            vs.push_back(s);
        }

        ll good=0;
        ll flag=0;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(vs[i][j]=='B')
                {

                    if(i-1 >=0 && vs[i-1][j]=='.')
                    {
                        vs[i-1][j]='#';
                    }
                    if(i-1 >=0 && vs[i-1][j]=='G')
                    {
                        flag++;
                        //break;
                    }

                    if(i+1 <=n-1 && vs[i+1][j]=='.')
                    {
                        vs[i+1][j]='#';
                    }
                    if(i+1<=n-1 && vs[i+1][j]=='G')
                    {
                        flag++;
                        //break;
                    }

                    if(j-1 >=0 && vs[i][j-1]=='.')
                    {
                        vs[i][j-1]='#';
                    }
                    if(j-1 >=0 && vs[i][j-1]=='G')
                    {
                        flag++;
                        //break;
                    }

                    if(j+1 <=m-1 && vs[i][j+1]=='.')
                    {
                        vs[i][j+1]='#';
                    }
                    if(j+1<=m-1 && vs[i][j+1]=='G')
                    {
                        flag++;
                        //break;
                    }

                }
                else if(vs[i][j]=='G')
                {
                    good++;
                }
            }

        }

        if(good==0){
            cout<<"Yes"<<endl<<endl;continue;
        }
        if(flag>0 || vs[n-1][m-1]=='#')
        {
            cout<<"No"<<endl<<endl;;
            continue;
        }
        queue<pair<int,int>>q;
        map<pair<int,int>,bool>mp;
        q.push({n-1,m-1});
        while(q.size()>0)
        {
            pair<int,int>p=q.front();
            q.pop();
            int i=p.first,j=p.second;
            mp[ {i,j} ]=true;
            if(vs[i][j]=='G')
            {
               // cout<<11111<<endl;
                good--;
            }
            if(vs[i][j]=='.' || vs[i][j]=='G')
            {
                //cout<<i<<" "<<j<<endl;
                if(i-1 >=0 && mp[{i-1,j}]==false)
                {
                    q.push({i-1,j});mp[{i-1,j}]=true;
                }

                if(i+1 <n && mp[{i+1,j}]==false)
                {
                    q.push({i+1,j});mp[{i+1,j}]=true;
                }

                if(j-1 >=0 && mp[{i,j-1}]==false)
                {
                    q.push({i,j-1});mp[{i,j-1}]=true;
                }

                if(j+1 <m && mp[{i,j+1}]==false)
                {
                    q.push({i,j+1});mp[{i,j+1}]=true;
                }
            }
        }
        if(good<=0){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
        cout<<endl;

    }
}
