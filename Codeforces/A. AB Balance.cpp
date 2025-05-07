#include<bits/stdc++.h>
#define ll long long
#define nline '\n'

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
        string s;
        cin>>s;
        int ab=0, ba=0;
        int n=s.size();
        for(int i=0;i<n;i++){
            if(i+1<n && s[i]=='a' && s[i+1]=='b'){
                ab++;
            }
            if(i+1<n && s[i]=='b' && s[i+1]=='a'){
                ba++;
            }
        }
        if(ab==ba){
            cout<<s<<endl;
        }
        else if(ab>ba){
            s[0]='b';
            cout<<s<<endl;
        }
        else{
            s[0]='a';
            cout<<s<<endl;
        }
    }

    return 0;
}