#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        string s;
        cin>>s;
        if((s.size())%2!=0){
            cout<<"NO"<<endl;
        }
        else{
            int count=0;
            int n=s.size();
            //cout<<n<<endl;
            int j=n/2;
            //cout<<j<<endl;
            for(int i=0;i<n/2;i++,j++){
                if(s[i]==s[j]){
                    count++;
                }
                else{
                    break;
                }
            }
            if((n/2)==count){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}