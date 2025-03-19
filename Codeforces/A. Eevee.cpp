#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,i;
    cin>>n;
    string s;
    string j="jolteon";
    string f="flareon";
    string u="umbreon";
    string l="leafeon";
    string g="glaceon";
    string ss="sylueon";

    cin>>s;
    if(n==6){
        cout<<"espeon"<<endl;
    }
    else if(8==n){
        cout<<"vaporeon"<<endl;
    }
    else{
        for(i=0;i<n;i++){
            if(s[i]!='.'){
                //l
                if(s[i]=='l' && i==1){
                    for(int k=i+1;k<n;k++){
                        if(s[k]!='.'){
                            if(s[k]==f[k] && s[k]==g[k]){}
                            else if(s[k]==f[k]){cout<<"flareon"<<endl;break;}
                            else{cout<<"glaceon"<<endl;break;}

                        }
                    }
                }
                //l
                else if(s[i]=='l' && i==2){
                    for(int k=i+1;k<n;k++){
                        if(s[k]!='.'){
                            if(s[k]==j[k] && s[k]==ss[k]){}
                            else if(s[k]==j[k]){cout<<"jolteon"<<endl;break;}
                            else{cout<<"sylveon"<<endl;break;}

                        }
                    }
                }
                else if(s[i]=='a' && i==2){
                    for(int k=i+1;k<n;k++){
                        if(s[k]!='.'){
                            if(s[k]==f[k] && s[k]==l[k] && s[k]==g[k]){}
                            else if(s[k]==f[k]){cout<<"flareon"<<endl;break;}
                            else if(s[k]==l[k]){cout<<"leafeon"<<endl;break;}
                            else{cout<<"glaceon"<<endl;break;}

                        }
                    }
                }
                else{
                    if(s[i]==j[i]){cout<<"jolteon"<<endl;}
                    if(s[i]==f[i]){cout<<"flareon"<<endl;}
                    if(s[i]==u[i]){cout<<"umbreon"<<endl;}
                    if(s[i]==l[i]){cout<<"leafeon"<<endl;}
                    if(s[i]==g[i]){cout<<"glaceon"<<endl;}
                    if(s[i]==ss[i]){cout<<"sylveon"<<endl;}
                }
                break;
            }
        }
    }


    return 0;

}