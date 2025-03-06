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
        int n,flag =1,flag1 =0,cnt=0,cnt2=0;
        cin>>n;
        vector<int> v,v1;
        int cur=0;
        for(int i=0; i<n; i++)
        {
            int x;
            cin>>x;
            if(x>=cur){
                cur=x;
            }
            else{
                flag=0;
            }
        }
        for(int i=0; i<n; i++)
        {
            int y;
            cin>>y;
            if(y == 1)
                cnt++;
            else
                cnt2++;
        }

        if(cnt && cnt2 || (flag)){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }

    }
}


