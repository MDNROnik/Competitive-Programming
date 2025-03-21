#include <bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    int num,count=0,n3;
    while(test--){
        cin>>num;
        if(num==1){count=0;}
        else if(num<4){
            if(num==3){count=2;}
            else if(num==2){count=1;}
        }
        else {
            n3=num/2;
            /*if(num%n3 != 0){
                n3--;
            }
            cout<<n3<<endl;*/
            if(num%n3!=0){num-=1;count++;}

            //cout<<num<<" "<<count<<endl;
            n3=num/2;
            if(n3+n3 != num){
                n3--;
            }

            count+=1;
            num/=n3;
            count+=num-1;

        }
        cout<<count<<endl;
        count=0;
    }

    return 0;
}
/*
else if(num<4){
            if(num==3){count=2;}
            else if(num==2){count=1;}
        }
        else{
            count+=1;
            num/=n3;
            count+=num-1;
        }
*/

 