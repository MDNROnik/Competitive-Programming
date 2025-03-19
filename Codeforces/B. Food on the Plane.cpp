#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;cin>>n;
    string s;cin>>s;
    long long slot=n/4;
    long long cslot=n%4;
    if(slot==0){}
    else if(cslot==0 && slot!=0){slot-=1;slot*=2;}
    else{slot*=2;}

    //cout<<slot<<endl;
    long long time=0;
    time+=(slot*6);

    //cout<<time<<endl;

    long long sit=0;
    if(s[0]=='a'){sit+=4;}
    else if(s[0]=='b'){sit+=5;}
    else if(s[0]=='c'){sit+=6;}
    else if(s[0]=='d'){sit+=3;}
    else if(s[0]=='e'){sit+=2;}
    else if(s[0]=='f'){sit+=1;}

    if(cslot==1){time+=(n-1);}
    else if(cslot==2){time+=6;time+=(n-1);}
    else if(cslot==3){time+=(n-3);}
    else if(cslot==0){time+=6;time+=(n-3);}

    cout<<time+sit<<endl;

    return 0;
}

 