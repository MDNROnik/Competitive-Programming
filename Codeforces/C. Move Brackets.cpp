#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll test;cin>>test;
    while(test--){
        ll n;cin>>n;
        string s;cin>>s;
        stack<char>st;
        ll count=0,i=0;
        while(1){
            if(s[i]=='('){
                st.push('(');
            }
            else if(s[i]==')'){
                if(st.size()==0){
                    count++;
                }
                else if(st.top()==')'){
                    count++;
                }
                else if(st.top()=='('){
                    st.pop();
                }
            }
            i++;
            //cout<<i<<" "<<n<<endl;
            if(i==n){break;}
        }
        cout<<count<<endl;
    }


    return 0;
}