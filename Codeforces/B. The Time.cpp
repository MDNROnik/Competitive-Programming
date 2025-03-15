#include<iostream>
using namespace std;

int main()
{
    int h,ht,m,gm,curr;
    string s,sh,sm;
    cin>>s;
    h=s[0]-'0';
    h*=10;
    h+=s[1]-'0';
    m=s[3]-'0';
    m*=10;
    m+=s[4]-'0';
    cin>>gm;
    m+=gm;
    if(m>=60){
        curr=m%60;
        h+=(m/60);
    }
    else{
        curr=m;
    }
    while(h>=24){
        h=h-24;
    }
    //cout<<h<<" "<<curr<<endl;

        if(h<10  || curr<10){
            if(h<10 && curr<10){
                cout<<0<<h<<":"<<0<<curr<<endl;
            }
            else if(h<10){
                cout<<0<<h<<":"<<curr<<endl;
            }
            else if(curr<10){
                cout<<h<<":"<<0<<curr<<endl;
            }
        }
        else{
            cout<<h<<":"<<curr<<endl;
        }

    return 0;
}