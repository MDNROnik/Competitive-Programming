#include <bits/stdc++.h>
using namespace std;
int main(){
    int num=3,first=0,second=0,third=0;
    string s1,s2,s3;
    cin>>s1>>s2>>s3;

    //for first
    if(s1[0]=='r'){
        if(s2[0]=='s'){
            first++;
        }
        if(s3[0]=='s'){
            first++;
        }
    }
    else if(s1[0]=='s'){
        if(s2[0]=='p'){
            first++;
        }
        if(s3[0]=='p'){
            first++;
        }
    }
    else if(s1[0]=='p'){
        if(s2[0]=='r'){
            first++;
        }
        if(s3[0]=='r'){
            first++;
        }
    }

    //for second
    if(s2[0]=='r'){
        if(s1[0]=='s'){
            second++;
        }
        if(s3[0]=='s'){
            second++;
        }
    }
    else if(s2[0]=='s'){
        if(s1[0]=='p'){
            second++;
        }
        if(s3[0]=='p'){
            second++;
        }
    }
    else if(s2[0]=='p'){
        if(s1[0]=='r'){
            second++;
        }
        if(s3[0]=='r'){
            second++;
        }
    }

    //for third
    if(s3[0]=='r'){
        if(s1[0]=='s'){
            third++;
        }
        if(s2[0]=='s'){
            third++;
        }
    }
    else if(s3[0]=='s'){
        if(s1[0]=='p'){
            third++;
        }
        if(s2[0]=='p'){
            third++;
        }
    }
    else if(s3[0]=='p'){
        if(s1[0]=='r'){
            third++;
        }
        if(s2[0]=='r'){
            third++;
        }
    }

    //cout<<first<<" "<<second<<" "<<third<<endl;

    if(first==2 || second==2 || third==2){
        if(first==2){
            cout<<"F"<<endl;
        }
        else if(second==2){
            cout<<"M"<<endl;
        }
        else{
            cout<<"S"<<endl;
        }
    }
    else{
        cout<<"?"<<endl;
    }


    return 0;
}