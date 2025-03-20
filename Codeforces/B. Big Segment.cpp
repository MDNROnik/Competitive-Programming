#include<iostream>
using namespace std;

int main()
{
    long long num,n1,n2,low=2147483647,high=1,l=0,h=0,i=1,count=0;
    cin>>num;
    while(num--){
        cin>>n1>>n2;
        if(n1<low){ low=n1;}
        if(n2>high){ high=n2; }
        if(n1==low && n2==high){
            count=i;
            l=n1;h=n2;
        }
        i++;
    }
    //cout<<low<<" "<<high<<endl;
    //cout<<l<<" "<<h<<endl;
    //cout<<count<<endl;
    if(l==low && h==high){
        cout<<count;
    }
    else{
        cout<<-1<<endl;
    }
    return 0;
}