#include<bits/stdc++.h>
#define ll long long
using namespace std;

void Yes(int check){
    if(check){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"Yes"<<endl;
    }
}
void No(int check){
    if(check){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t;cin>>t;
    while(t--){
        string s, t;
        cin>>s>>t;
        map<char, vector<ll>>mp;
        int n=s.size();
        for(int i=0;i<n;i++){
            mp[s[i]].push_back(i);
        }
        ll now = 1000000;
        n=t.size()-1;
        for(int i=n;i>=0;i--){
            int siz =  mp[t[i]].size();
            if(siz==0){now = -1;break;}
            int temp = mp[t[i]][siz-1];
            mp[t[i]].pop_back();
            if(temp<now){
                now=temp;
            }
            else{
                now=-1;break;
            }
            //cout<<temp<<endl;
        }
        if(now==-1){
            No(1);
        }
        else{
            Yes(1);
        }
    }

    return 0;
}


