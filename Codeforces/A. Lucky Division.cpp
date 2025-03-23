#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cin>>num;
    int arr[12]={4,7,47,74,444,447,474,477,744,747,774,777};
    int i=0,j=0;

    while(i<12){
        if(num % arr[i] == 00){
            cout<<"YES"<<endl;
            break;
        }
        i++;
    }
    if(i==12){cout<<"NO"<<endl;}
    return 0;
}
 