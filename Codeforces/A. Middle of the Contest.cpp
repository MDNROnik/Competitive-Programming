#include <bits/stdc++.h>
using namespace std;
#define ll long long
vector<string>arr;
map<int,int>mp;
map<int,int>::iterator it;
int main(){
    ll h1,h2,m1,m2;
    char c;
    cin>>h1>>c>>m1;
    cin>>h2>>c>>m2;
    h1++;h2++;
    m1++;m2++;

    ll temp=abs(h1-h2);
    temp*=60;
    temp+=(m2-m1);
    temp/=2;
    ll t=(temp/60);
    ll t2=(temp%60);
    h1+=t;

    if(m1+t2 > 60){
        ll t3=60-m1;
        t2-=t3;
        h1++;
        //cout<<h1<<":"<<t2<<endl;
        if(h1-1<10){
            cout<<0;
        }
        cout<<h1-1<<":";
        if(t2-1<10){
            cout<<0;
        }
        cout<<t2-1<<endl;
    }
    else{
        //cout<<h1<<":"<<m1+t2<<endl;
        if(h1-1<10){
            cout<<0;
        }
        cout<<h1-1<<":";
        if((t2+m1)-1<10){
            cout<<0;
        }
        cout<<(t2+m1)-1<<endl;
    }


    return 0;
}