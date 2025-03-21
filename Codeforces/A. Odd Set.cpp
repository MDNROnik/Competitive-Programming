#include<bits/stdc++.h>
#include <string>
#include <sstream>
using namespace std;
int main(){
    int test,count=0,count2=0;
    cin>>test;
    while(test--){
        int num,n;
        cin>>num;
        int arr[num*2];
        for(int i=0;i<num*2;i++){
            cin>>arr[i];
        }
        for(int i=0;i<num*2;i++){
            if(arr[i]%2==0){
                count2++;
            }
            else{
                count++;
            }
        }
        //cout<<count<<" "<<count2<<endl;
        if(count==count2){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        count=0;count2=0;
    }


    return 0;
}


 