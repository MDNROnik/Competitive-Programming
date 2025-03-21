#include<bits/stdc++.h>
#include<list>
using namespace std;
int main(){
    int num,n;
    cin>>num;n=num;
    int k=0,i=1;
    while(num >0){
        //cout<<num<<" "<<i<<" "<<k<<endl;
        if(k==5){
            k=1;
            i=i+i;
        }
        else {
            k++;
        }
        num-=i;

    }
    //cout<<k<<endl;
        if(k==1){
        cout<<"Sheldon"<<endl;
        }
        else if(k==2){
            cout<<"Leonard"<<endl;
        }
        else if(k==3){
            cout<<"Penny"<<endl;
        }
        else if(k==4){
            cout<<"Rajesh"<<endl;
        }
        else if(k==5){
            cout<<"Howard"<<endl;
        }

    return 0;
}