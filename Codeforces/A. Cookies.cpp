#include<bits/stdc++.h>
using namespace std;
int main(){
    int num,total=0,count=0;
    cin>>num;
    vector<int>vec(num);
    for(int i=0;i<num;i++){
        cin>>vec[i];
        total+=vec[i];
    }
    for(int i=0;i<num;i++){
        if((total-vec[i])%2==0){
            count++;
        }
    }
    cout<<count<<endl;

    return 0;
}