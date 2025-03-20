#include<iostream>
using namespace std;

int main()
{
    int num,a=0,g=0,c=0,t=0,q=0,count2=0;
    cin>>num;
    string s;
    cin>>s;
    a=num/4;
    c=num/4;
    g=num/4;
    t=num/4;
    for(int i=0;i<num;i++){
        if(s[i]=='A'){
            a--;
        }
        if(s[i]=='G'){
            g--;
        }
        if(s[i]=='C'){
            c--;
        }
        if(s[i]=='T'){
            t--;
        }
    }
    
    if(num%4==00){
       for(int i=0;i<num;i++){
           if(s[i]=='?' && a!=0) {
               a--;
               s[i]='A';
           }
           if(s[i]=='?' && g!=0) {
               g--;
               s[i]='G';
           }
           if(s[i]=='?' && c!=0) {
               c--;
               s[i]='C';
           }
           if(s[i]=='?' && t!=0) {
               t--;
               s[i]='T';
           }
       }
       count2=count(s.begin(),s.end(),'?');
       if(count2==0){
           if(a==0 && c==0 && g==0 && t==0){
               cout<<s<<endl;
           }
           else{
               cout<<"==="<<endl;
           }
       }
       else{
           cout<<"==="<<endl;
       }
    }   
    else{
        cout<<"==="<<endl;
    }
    return 0;
}