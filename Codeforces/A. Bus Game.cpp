#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,y;
    cin>>x>>y;
    //x*=100;y*=10;
    int cial=1,honako=1;
    ////cout<<x<<" "<<y<<endl;
    while(1){
        //cout<<x<<" "<<y<<endl;
        if(x>=2 && y>=2){
            x-=2;y-=2;
        }
        else if(x==1 && y>=12){
            x-=1;y-=12;
        }
        else if(x==0 && y>=22){
            x-=0;y-=22;
        }
        else{
            cial=0;break;
        }
        //cout<<x<<" "<<y<<endl;
        if(y>=22){
            y-=22;
        }
        else if(y>=12 && x>=1){
            y-=12;x-=1;
        }
        else if(y>=2 && x>=2){
            y-=2;x-=2;
        }
        else {
            honako=0;break;
        }
        //cout<<x<<" "<<y<<endl;
    }
    if(cial==0){cout<<"Hanako"<<endl;}
    else{
        cout<<"Ciel"<<endl;
    }

    return 0;
}

 