#include<bits/stdc++.h>
using namespace std;
int main(){
    int len,num=1,n=10;
    cin>>len;
    string s,s2;
    char c[num];
    for(int i=0;i<n;i++){
        s[i]='0';
    }
    while(len--){
        cin>>c[0];
        if(c[0]=='L'){
            for(int i=0;i<n;i++){
                if(s[i]=='0'){s[i]='1';break;}
            }
        }
        else if(c[0]=='R'){
            //cout<<"hello"<<endl;
            for(int i=n-1;i>=0;i--){
                //cout<<"hello"<<endl;
                if(s[i]=='0'){s[i]='1';break;}
            }

        }
        else{
            if(c[0]=='0'){s[0]='0';}
            else if(c[0]=='1'){s[1]='0';}
            else if(c[0]=='2'){s[2]='0';}
            else if(c[0]=='3'){s[3]='0';}
            else if(c[0]=='4'){s[4]='0';}
            else if(c[0]=='5'){s[5]='0';}
            else if(c[0]=='6'){s[6]='0';}
            else if(c[0]=='7'){s[7]='0';}
            else if(c[0]=='8'){s[8]='0';}
            else if(c[0]=='9'){s[9]='0';}
        }
    }
    for(int i=0;i<n;i++){
        cout<<s[i];
    }
    cout<<endl;
    return 0;
}