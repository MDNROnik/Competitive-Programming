#include<bits/stdc++.h>
using namespace std;
int main(){
    int test,num,n=0,con=0,i;
    cin>>test;
    string s;
    while(test--){
        cin>>num;
        cin>>s;n=0;
        if(num==11 && s[0]=='8'){n=1;}
        else if(num<11){n=0;}
        else{
            for( i=0;i<num;i++){
            con=num-i;//cout<<con<<endl;
            if(s[i]=='8' && con>=11){
                //cout<<"find "<<s[i]<<endl;
                //cout<<con<<endl;
                    n=1;break;
            }
          }
          //cout<<con<<endl;
        }
        if(n==1){cout<<"YES"<<endl;}
        else {cout<<"NO"<<endl;}
        //cout<<n<<endl;
    }
    return 0;
}



 