#include <bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        int c1,c2,c3;
        cin>>c1>>c2>>c3;
        int a1,a2,a3,a4,a5;
        cin>>a1>>a2>>a3>>a4>>a5;
        c1-=a1;
        c2-=a2;
        c3-=a3;
        //cout<<c1<<" "<<c2<<" "<<c3<<endl;
        if(c1<0 || c2<0 ||c3<0 ){
            cout<<"NO"<<endl;
        }
        else{
            //cout<<c1<<endl;
            if(c1<=a4){
                a4-=c1;c1=0;
            }
            else{
                c1-=a4;a4=0;
            }

            if(c2<=a5){
                a5-=c2;c2=0;
            }
            else{
                c2-=a5;a5=0;
            }

            c3-=(a4+a5);
            //cout<<c1<<" "<<c2<<" "<<c3<<endl;
            if(c3>=0 && c2>=0 && c1>=0){cout<<"YES"<<endl;}
            else{cout<<"NO"<<endl;}
        }
    }
    return 0;
}