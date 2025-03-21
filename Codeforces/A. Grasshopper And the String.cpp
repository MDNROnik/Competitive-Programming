#include <bits/stdc++.h>
using namespace std;
int main(){
    int num=0,n=0,n2=0,ma=0,count=1;;
    string s;
    cin>>s;

    for(int i=0;i<s.size();i++){
        n=i+1;
        if(s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U' || s[i]=='Y' ){
            //cout<<count<<endl;
            if(ma<count){
                ma=count;
            }
            count=1;
        }
        //else if(i+2==s.size()+1){count++;}
        else{
            count++;
        }
        //cout<<n<<" "<<s[i]<<endl;
        //cout<<i+2<<endl;
        //cout<<s.size()+1<<endl;
        //cout<<count<<endl;
    }
    if(ma<count){
        ma=count;
    }
    cout<<ma<<endl;
    return 0;
}
/*
if(s[i]=!='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U' || s[i]=='Y' ){
            n=i+1;
            num=n-n2;
            n2=n;
}*/
 