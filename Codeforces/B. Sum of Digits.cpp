#include <bits/stdc++.h>
using namespace std;
int main(){
    int num=0,n=0,i=0,count=0,j=0;
    //cin>>num;

    string s;
    cin>>s;
    if(s.size()==1){
        cout<<0<<endl;
    }
    else{
        while(s.size()>=2){
                num=0;
            for(int i=0;i<s.size();i++){
                num+=s[i]-'0';
            }
            j++;
            /*cout<<num<<endl;
            while(num>=10){
                while(num!=0){
                    n+=num%10;
                    num/=10;
                }
                num=n;n=0;
                cout<<num<<endl;
                j++;
            }
            cout<<j<<endl;*/
            s.clear();
            ostringstream str1;
            str1<<num;
            str1.clear();
            string s2;
            s2=str1.str();
            s=s2;
            //cout<<s.size()<<" "<<j<<endl;
        }
        cout<<j<<endl;
    }
    return 0;
}


 