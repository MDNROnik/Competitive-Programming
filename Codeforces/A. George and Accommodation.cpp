#include<bits/stdc++.h>
using namespace std;
int main(){
    int num,p1,p2,c=0;
    cin>>num;
    for(int i=0;i<num;i++){
        cin>>p1>>p2;
        if((p2-p1)>=2){c++;}
    }


    cout<<c<<endl;
    return 0;
}
 