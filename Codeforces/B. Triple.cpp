#include <bits/stdc++.h>
using namespace std;
#define intl long long
int main(){
    intl n,a;
    cin>>n;
    while(n--){
        cin>>a;
        int value;
        map<int,int>mp;
        map<int,int>::iterator it;
        for(int i=0;i<a;i++){
            cin>>value;
            ++mp[value];
        }
        int count=0;
        for(it=mp.begin();it!=mp.end();it++){
            int temp;
            temp=it->second;
            if(temp>=3){
                cout<<it->first<<endl;count=1;break;
            }
        }
        if(count==0){
            cout<<-1<<endl;
        }

    }

    return 0;
}