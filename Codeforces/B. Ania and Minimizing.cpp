#include<iostream>
using namespace std;
int main()
{
    long long len,n,i=1;
    cin>>len>>n;
    string s;
    cin>>s;
    if(s.size()>1 && n!=0){
        
        if(s[0]!='1'){
            s[0]='1';
            n-=1;
        }
        while(1){
        if(n==0 || i+1>s.size()){
            break;
        }
            if(s[i]!='0'){
                s[i]='0';
                n--;
            }
        i++;
     }
    }
    else if(s.size()==1 && n!=0){
        s[0]='0';
    }
    
    cout<<s<<endl;
    return 0;
}