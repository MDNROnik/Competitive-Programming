#include<bits/stdc++.h>
using namespace std;
int main(){
    int test,seg,l,r,count=0;
    cin>>test>>seg;
    vector<int> vec(seg,1);

    while(test--){
        cin>>l>>r;
        for(int i=l-1;i<r;i++){
            vec[i]=0;
        }
    }
    for(int i=0;i<vec.size();i++){
        if(vec[i]==1){count++;}
    }
    if(count==0){cout<<0<<endl;}
    else{
        cout<<count<<endl;
        for(int i=0;i<vec.size();i++){
        if(vec[i]==1){
            cout<<i+1<<" ";
        }
       }
    }
    return 0;
}