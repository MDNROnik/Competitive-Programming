#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    long long test;
    cin>>test;
    while(test--){
        long long n,k;
        cin>>n>>k;
        string s;cin>>s;
        long long maxx=0,b=0,i=0,temp;

        for(int i=0;i<k;i++){
            if(s[i]=='B'){b++;}
        }
        maxx=b;
        for(int i=1;i<n;i++){
            temp=i+k;
            if(temp<=n){
                //cout<<s[i]<<" "<<s[temp-1]<<endl;
                if(s[i-1]=='B'){b--;}
                if(s[temp-1]=='B'){b++;}
                if(b>maxx){maxx=b;}
            }
        }


        cout<<k-maxx<<endl;
    }
    return 0;
}