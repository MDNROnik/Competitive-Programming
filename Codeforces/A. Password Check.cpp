#include <bits/stdc++.h>
using namespace std;
int main(){

    string s;
    cin>>s;
    int con=0;
    if(s.size()>=5){
        con++;
    }
    int u=0,l=0,d=0;
    for(int i=0;i<s.size();i++){
        int a=s[i];
        if((a>=65 && a<=90) && u==0){
            con++;u++;
        }
        if((a>=97 && a<=122) && l==0){
            con++;l++;
        }
        if((a>=48 && a<=57) && d==0){
            con++;d++;
        }
        if(con==4){
            break;
        }
    }
    if(con==4){
        cout<<"Correct"<<endl;
    }
    else{
        cout<<"Too weak"<<endl;
    }



    return 0;
}
 