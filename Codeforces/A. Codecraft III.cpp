#include <bits/stdc++.h>
using namespace std;
int main(){
    int num,n=0,c=0;
    string s;
    const char *month[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    cin>>s;
    cin>>num;
    if(s=="January"){
        if(num+1<=12){
           cout<<month[(num+1)-1]<<endl;
        }
        else{
            num=num+1;
            n=num%12;
            if(n==0){n=12;}
            cout<<month[n-1]<<endl;
        }
    }
    else if(s=="February"){
        if(num+2<=12){
           cout<<month[(num+2)-1]<<endl;
        }
        else{
            num=num+2;
            n=num%12;
            if(n==0){n=12;}
            cout<<month[n-1]<<endl;
        }
    }
    else if(s=="March"){
        if(num+3<=12){
           cout<<month[(num+3)-1]<<endl;
        }
        else{
            num=num+3;
            n=num%12;
            if(n==0){n=12;}
            cout<<month[n-1]<<endl;
        }
    }
    else if(s=="April"){
        if(num+4<=12){
           cout<<month[(num+4)-1]<<endl;
        }
        else{
            num=num+4;
            n=num%12;
            if(n==0){n=12;}
            cout<<month[n-1]<<endl;
        }
    }
    else if(s=="May"){
        if(num+5<=12){
           cout<<month[(num+5)-1]<<endl;
        }
        else{
            num=num+5;
            n=num%12;
            if(n==0){n=12;}
            cout<<month[n-1]<<endl;
        }
    }
    else if(s=="June"){
        if(num+6<=12){
           cout<<month[(num+6)-1]<<endl;
        }
        else{
            num=num+6;
            n=num%12;
            if(n==0){n=12;}
            cout<<month[n-1]<<endl;
        }
    }
    else if(s=="July"){
        if(num+7<=12){
           cout<<month[(num+7)-1]<<endl;
        }
        else{
            num=num+7;
            n=num%12;
            if(n==0){n=12;}
            cout<<month[n-1]<<endl;
        }
    }
    else if(s=="August"){
        if(num+8<=12){
           cout<<month[(num+8)-1]<<endl;
        }
        else{
            num=num+8;
            n=num%12;
            if(n==0){n=12;}
            cout<<month[n-1]<<endl;
        }
    }
    else if(s=="September"){
        if(num+9<=12){
           cout<<month[(num+9)-1]<<endl;
        }
        else{
            num=num+9;
            n=num%12;
            if(n==0){n=12;}
            cout<<month[n-1]<<endl;
        }
    }
    else if(s=="October"){
        if(num+20<=12){
           cout<<month[(num+10)-1]<<endl;
        }
        else{
            num=num+10;
            n=num%12;
            if(n==0){n=12;}
            cout<<month[n-1]<<endl;
        }
    }
    else if(s=="November"){
        if(num+11<=12){
           cout<<month[(num+11)-1]<<endl;
        }
        else{
            num=num+11;
            n=num%12;
            if(n==0){n=12;}
            cout<<month[n-1]<<endl;
        }
    }
    else if(s=="December"){
        if(num+12<=12){
           cout<<month[(num+12)-1]<<endl;
        }
        else{
            num=num+12;
            n=num%12;
            if(n==0){n=12;}
            cout<<month[n-1]<<endl;
        }
    }

    return 0;
}

 