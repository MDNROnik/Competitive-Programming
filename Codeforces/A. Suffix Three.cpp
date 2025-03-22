#include<bits/stdc++.h>
using namespace std;
int main(){
    int test,si;
    cin>>test;
    string s;
    while(test--){
        cin>>s;
        si=s.size();
        if(s[si-2]=='p' && s[si-1]=='o'){
            cout<<"FILIPINO"<<endl;
        }
        else if(s[si-4]=='d' && s[si-3]=='e' && s[si-2]=='s' && s[si-1]=='u'){
            cout<<"JAPANESE"<<endl;
        }
        else if(s[si-4]=='m' && s[si-3]=='a' && s[si-2]=='s' && s[si-1]=='u'){
            cout<<"JAPANESE"<<endl;
        }
        else if(s[si-5]=='m'&&s[si-4]=='n' && s[si-3]=='i' && s[si-2]=='d' && s[si-1]=='a'){
            cout<<"KOREAN"<<endl;
        }
    }
    return 0;
}



 