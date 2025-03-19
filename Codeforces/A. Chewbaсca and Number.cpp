#include<bits/stdc++.h>
using namespace std;
int main(){
    unsigned long long n,n1,n2=10,c=0;
    string s,s2;
    cin>>s;
    for(int i=0;i<s.size();i++){
        n=s[i]-'0';
        n1=9-n;
        if(n==9 && i==0){
            cout<<n;
        }
        else{
            if(n<=n1){
                cout<<n;
            }
            else{
                cout<<n1;
            }
        }

    }

    cout<<endl;
    return 0;
}
 