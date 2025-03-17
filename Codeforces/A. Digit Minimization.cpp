#include <bits/stdc++.h>
using namespace std;
#define ll long long
vector<string>arr;
int main(){
    int test;
    cin>>test;
    while(test--){
        int n;
        cin>>n;
        string s,s1,s2,s3;int i=0,t=0;
        stringstream ss;
        ss<<n;
        ss>>s;
        int small=10000000,ii=0;
        while(n>0){
            ii++;
            if(small > n%10){small=n%10;}
            n/=10;
        }
        if(s.size()==2){
            cout<<s[1]<<endl;
        }
        else{
            stringstream ss2;
            ss2<<small;
            ss2>>s1;
            for(int i=0;i<s.size();i++){
                if(s[i]==s1[0]){
                    s2[0]=s[i];
                    s[i]=s[0];
                    s[0]=s2[0];
                    break;
                }
            }
            int nn=s.size();
            nn--;
            while(nn>1){
                s2[0]=s[nn];
                s[nn]=s[nn-1];
                s[nn-1]=s2[0];
                nn--;
            }
            cout<<s[0]<<endl;
        }
    }
    return 0;
}