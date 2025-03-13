#include<bits/stdc++.h>
using namespace std;
#define ll unsigned long long int
#define mod 1000000007
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll test;cin>>test;
    while(test--){
        string s;cin>>s;
        ll c=0,in=-1,t;
        for(int i=s.size()-2;i>=0;i--){
            t=s[i]-'0';
            t+=(s[i+1]-'0');
            if(t>9){
                c++;in=i;
                ostringstream str1;
                str1<<t;
                string str=str1.str();
                s[i]=str[0];
                s[i+1]=str[1];break;
            }
        }
        if(c==0){
            t=s[0]-'0';
            t+=s[1]-'0';
            ostringstream str1;
            str1<<t;
            string str=str1.str();
            s[1]=str[0];
            for(int i=1;i<s.size();i++){
                cout<<s[i];
            }
            cout<<endl;
        }
        else{
            cout<<s<<endl;
        }
    }



    return 0;
}
