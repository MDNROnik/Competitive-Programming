#include <bits/stdc++.h>
using namespace std;
int main(){
    int num,x=0,X=0,ni=0;
    cin>>num;
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[i]=='x'){x++;}
        else{X++;}
    }
    if(x>X){
        int n2=num/2;
        int n=x-n2;
        ni=n;
        //cout<<n<<endl;
        for(int i=0;n!=0;i++){
            if(s[i]=='x'){
                n--;
                s[i]='X';
            }
        }
    }
    else if(X>x){
        int n2=num/2;
        int n=X-n2;
        ni=n;
        //cout<<n<<endl;
        for(int i=0;n!=0;i++){
            if(s[i]=='X'){
                n--;
                s[i]='x';
            }
        }
    }
    cout<<ni<<endl;
    cout<<s<<endl;

    return 0;
}
 