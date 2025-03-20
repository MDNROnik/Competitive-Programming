#include <bits/stdc++.h>
using namespace std;
int main(){
    int n1,n2,sum,i=0;
    string s1,s2,ssum;
    cin>>n1>>n2;
    sum=n1+n2;
    stringstream ss;
    ss<<n1;
    ss>>s1;
    stringstream ss2;
    ss2<<n2;
    ss2>>s2;
    stringstream ss3;
    ss3<<sum;
    ss3>>ssum;
    //cout<<s1<<endl<<s2<<endl<<ssum<<endl;
    //cout<<n1<<endl<<n2<<endl<<sum<<endl;
    i=0;
    while(1){
        if(i==s1.size()){
            break;
        }
        if(s1[i]=='0'){
            s1.erase(s1.begin()+i);
        }
        else{
            i++;
        }
    }
    i=0;
    while(1){
        if(i==s2.size()){
            break;
        }
        if(s2[i]=='0'){
            s2.erase(s2.begin()+i);
        }
        else{
            i++;
        }
    }
    i=0;
    while(1){
        if(i==ssum.size()){
            break;
        }
        if(ssum[i]=='0'){
            ssum.erase(ssum.begin()+i);
        }
        else{
            i++;
        }
    }
    //cout<<s1<<endl<<s2<<endl<<ssum<<endl;
    stringstream geek(s1);
    geek>>n1;
    stringstream geek2(s2);
    geek2>>n2;
    stringstream geek3(ssum);
    geek3>>sum;
    //cout<<n1<<endl<<n2<<endl<<sum<<endl;
    if(n1+n2 == sum){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }



    return 0;
}
 