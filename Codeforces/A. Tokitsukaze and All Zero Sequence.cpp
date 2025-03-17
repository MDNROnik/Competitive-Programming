#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    int test;
    cin>>test;
    while(test--){
        long long n,x,done=0;
        cin>>n;
        map<int,int>mp;
        map<int,int>::iterator it;
        for(int i=0;i<n;i++){
            cin>>x;
            mp[x]++;
        }
        it=mp.begin();
        int temp=0;
        if(it->first==0){
            cout<<n-it->second<<endl;
        }
        else{
            for(it=mp.begin();it!=mp.end();it++){
                if(it->second > 1){
                    temp=1;break;
                }
            }
            if(temp==0){
                cout<<n+1<<endl;
            }
            else if(temp==1){
                cout<<n<<endl;
            }
        }

    }
    return 0;
}