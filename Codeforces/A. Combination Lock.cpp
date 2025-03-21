#include<bits/stdc++.h>
#include <string>
#include <sstream>
using namespace std;
int main(){
    long long num;cin>>num;
    string arr,arr2;
    long long n2,n1,count=0,nu1,nu2,arrs,arr2s;
    cin>>arr>>arr2;
    list<int>li,li2;
    for(int i=0;i<num;i++){
        n1=arr[i]-'0';
        n2=arr2[i]-'0';


        //n1=arr%10;arr/=10;
        //n2=arr2%10;arr2/=10;
        //cout<<n1<<endl<<n2<<endl;

        if(n1>n2){
            swap(n1,n2);
        }
        nu1=n2-n1;
        nu2=(10-n2)+n1;
        //cout<<n1<<" "<<n2<<endl;
        //cout<<nu1<<" "<<nu2<<endl;
        if(nu1>nu2){
            swap(nu1,nu2);
        }
        count+=nu1;
        //cout<<n1<<" "<<n2<<endl;


    }
    cout<<count<<endl;

    return 0;
}




 