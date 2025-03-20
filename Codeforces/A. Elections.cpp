#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m,num,great=0,index=0,num2=0,c=0,index2=0,ans=0;
    cin>>n>>m;
    map<int,int>mapm;
    vector<int>vec(n);
    for(int i=0;i<m;i++){
        int vec2[n];
        for(int j=0;j<n;j++){
            cin>>vec2[j];
            num=vec2[j];
            if(great<num){
                great=num;
                index=j;
            }
        }
        vec[index]++;
        great=0,index=0,c=0;
    }
    for(int i=0;i<n;i++){
        //cout<<vec[i]<<" ";
        if(index2<vec[i]){
            index2=vec[i];
            ans=i;
        }
    }
    cout<<ans+1<<endl;
    return 0;
}