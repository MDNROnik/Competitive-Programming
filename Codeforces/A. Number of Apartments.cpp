#include <bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    while(test--){
        int num,three=0,five=0,seven=0;
        cin>>num;
        int temp=0;
        if(num==4 || num==1 || num==2){
            cout<<-1<<endl;
        }
        else{
            if(num%3 == 0){
                three=num/3;
                num=num-(three*3);
            }
            else if(num%3==2 ){
                three=num/3;
                three-=1;
                num=num-(three*3);
            }
            else if(num%3==1 ){
                three=num/3;
                three-=2;
                num=num-(three*3);
            }
            //cout<<three<<" "<<num<<endl;

            if(num%5 == 0){
                five=num/5;
                num=num-(five*5);
            }
            else if(num%5==2){
                five=num/5;
                five-=1;
                num=num-(five*3);
            }
            //cout<<five<<" "<<num<<endl;




            if(num%7 == 0){
                seven=num/7;
                num=num-(seven*7);
            }
            //cout<<seven<<" "<<num<<endl;
            cout<<three<<" "<<five<<" "<<seven<<endl;
        }

    }

    return 0;
}