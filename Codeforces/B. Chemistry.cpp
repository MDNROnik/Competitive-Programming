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
        ll n, k;cin>>n>>k;
        string s;cin>>s;
        map<int, int>mp;
        for(int i=0;i<n;i++){
            mp[s[i]]++;
        }
        ll count=0;
        for(auto a=mp.begin();a!=mp.end();a++){
            if(a->second%2!=0){
                count++;
            }
        }
        //cout<<count<<endl;
        
        if(abs(count-k)<=1){
            Yes(1);
        }
        else if(count>=k){
            if(count-k<=1){
                Yes(1);
            }
            else{
                No(1);
            }
        }
        else if(count==0){
            Yes(1);
        }
        else if(count<k){
            Yes(1);
        }


    }

    return 0;
}