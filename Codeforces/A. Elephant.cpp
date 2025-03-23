#include<bits/stdc++.h>
using namespace std;
int main(){
    int num,c=0;
    cin>>num;
    while(num!=0){
        if(num>=5){
            num-=5;c++;
        }
        else if(num>=4){
            num-=4;c++;
        }
        else if(num>=3){
            num-=3;c++;
        }
        else if(num>=2){
            num-=2;c++;
        }
        else if(num>=1){
            num-=1;c++;
        }
    }
    cout<<c<<endl;
    return 0;
}
 