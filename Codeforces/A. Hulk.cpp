#include<bits/stdc++.h>
using namespace std;
int main(){
    int num,i=1;
    cin>>num;
    while(i<=num){
        if(i%2!=0){
            if(num == i ){
                cout<<"I hate it ";
            }
            else{
                cout<<"I hate that ";
            }
        }
        else{
            if(num==i){
                cout<<"I love it";
            }
            else{
                cout<<"I love that ";
            }
        }
        i++;
    }
    return 0;
}

 