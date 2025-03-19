#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,k,count=0,temp=0;
    cin>>n>>k;
    vector<int>vec(n);
    map<int,int>mp;
    map<int,int>::iterator it;
    for(int i=0;i<n;i++){
        cin>>vec[i];
        ++mp[vec[i]];
    }
    if(mp.size()==1){
        cout<<0<<endl;
    }
    else if(0 == (k-1)){
        cout<<-1<<endl;
    }
    else{
        temp=vec[k-1];
        for(int i=k;i<n;i++){
            if(temp!=vec[i]){
                count=1;break;
            }
        }
        if(count==1){
            cout<<-1<<endl;
        }
        else{
            //cout<<"HELLO"<<endl;
            for(int i=k-2;i>=0;i--){
                if(vec[i]!=temp){
                    cout<<i+1<<endl;break;
                }
            }
        }
    }
   return 0;
}
 