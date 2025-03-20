#include<bits/stdc++.h>
using namespace std;
int main(){
    int num,c;
    cin>>num>>c;
    vector<int>vec(num);
    for(int i=0;i<num;i++){
        cin>>vec[i];
    }
    int maxx=0,temp=0;
    for(int i=1;i<num;i++){
        if(vec[i-1]>vec[i]){
            temp=(vec[i-1]-vec[i])-c;
            if(maxx<temp){
                maxx=temp;
            }
        }
    }
    cout<<maxx<<endl;
    return 0;
}