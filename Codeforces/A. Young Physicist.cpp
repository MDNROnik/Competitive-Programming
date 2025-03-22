#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;cin>>num;
    int num2,total=0,x,y,z,tx=0,ty=0,tz=0;
    for(int i=0;i<num;i++){
        cin>>x>>y>>z;
        tx+=x;ty+=y;tz+=z;
    }
    //cout<<tx<<" "<<ty<<" "<<tz<<endl;
    if(tx==0 && ty==0 && tz==0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

    return 0;
}


 