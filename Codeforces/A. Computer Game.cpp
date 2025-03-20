#include <bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    int num,e=0,s11=1,s22=0,i=0;
    string s,s2,s3;
    while(test--){
        cin>>num;
        cin>>s>>s2;
        for( i=0;i<num;i++){
            if(i==num-1){
                e+=1;break;
            }
            if(i+1<num){
                if(s[i]=='0' && s[i+1]=='0' && s11==1){
                }
                else if(s[i]=='0' && s[i+1]=='1' && s2[i+1]=='0' && s11==1){
                    s22=1;s11=0;
                    //cout<<s[i]<<" "<<s[i+1]<<" "<<s2[i+1]<<endl;
                }
                else if(s[i]=='0' && s[i+1]=='1' && s2[i+1]=='1' ){
                    //cout<<s[i]<<" "<<s[i+1]<<" "<<s2[i+1]<<endl;
                    break;
                }
                if(s2[i]=='0' && s2[i+1]=='0' && s22==1){
                }
                else if(s2[i]=='0' && s2[i+1]=='1' && s[i+1]=='0' && s22==1 ){
                    s11=1;s22=0;
                }
                else if(s2[i]=='0' && s2[i+1]=='1' && s[i+1]=='1' ){

                    break;
                }
                //cout<<s11<<" "<<s22<<endl;
                //cout<<i<<endl;
            }
        }
        //cout<<i<<" "<<e<<endl;
        if(e==1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        e=0;
    }
    return 0;
}

 