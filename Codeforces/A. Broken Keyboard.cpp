#include<bits/stdc++.h>
using  namespace  std;

#define faster  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    faster;
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        set<char>st;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==s[i+1])i++;
            else
            {
                st.insert(s[i]);
            }
        }
        for(auto it: st)
        {
            cout<<it;
        }
        cout<<endl;
    }
}