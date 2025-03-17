#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    long long test;
    cin>>test;
    while(test--){
        vector<int>v;
        string s;
        cin>>s;long long sum=0;
        for(int i=0;i<s.size();i++){
            int temp=s[i]-'0';
            v.push_back(temp-48);sum+=(temp-48);
        }
        int t2=s.size(),t,tt;
        long long alice=0,bob=0;
        if(s.size()%2==0){
            alice=sum;
        }
        else {
            if(s.size()==1){bob=sum;}
            else{
                t=v[0];tt=v[t2-1];
                if(t==tt){
                    alice=sum-t;
                    bob=t;
                }
                else if(t<tt){
                    alice=sum-t;
                    bob=t;
                }
                else if(t>tt){
                    alice=sum-tt;
                    bob=tt;
                }
            }
        }
        if(alice<bob){
            cout<<"Bob "<<bob-alice<<endl;
        }
        else{
            cout<<"Alice "<<alice-bob<<endl;
        }
        v.clear();
    }
    return 0;
}