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
        string s,str="";
        cin>>s;
        int n=s.size();
        int c=0;
        for(int i=0;i<n-1;i++){
            if(s[i]!=s[i+1]){c++;break;}
        }
        if(c==0){
            cout<<s<<endl;continue;
        }
        for(int i=0;i<n;i++){
            str.push_back('0');
            str.push_back('1');
        }
        cout<<str<<endl;
    }

}


