#include<bits/stdc++.h>
using namespace std;
int main(){
    int num,n1,n2,cap=0,high=0;
    cin>>num;
    while(num!=0){
        num--;
        cin>>n1>>n2;
        cap-=n1;
        cap+=n2;
        if(high<cap){
            high=cap;
        }
    }
    cout<<high<<endl;
    return 0;
}
 