#include <bits/stdc++.h>
using namespace std;
vector<long>vec;
int main(){
    ios_base::sync_with_stdio(false);
    long long test;
    cin>>test;
    cin.ignore();
    string s[test],ss[test],sss[test];
    for(int i=0;i<test;i++){
        cin>>s[i]>>ss[i];
    }
    int count=0,bre=0;
    for(int i=0;i<test;i++){
        if(i+4<test && s[i]!="0"){
            int k=0;
            string s1=s[i];
            for(int j=i;j<test;j++){
                if(s1==s[j]){
                    sss[k]=ss[j];
                    k++;s[j]="0";
                }
            }
            for(int j=0;j<k;j++){
                if(j+4<k){
                    if(sss[j]!=sss[j+1] && sss[j]!=sss[j+2] && sss[j]!=sss[j+3] && sss[j]!=sss[j+4] && sss[j+1]!=sss[j+2] && sss[j+1]!=sss[j+3] && sss[j+1]!=sss[j+4] && sss[j+2]!=sss[j+3] && sss[j+2]!=sss[j+4] && sss[j+3]!=sss[j+4]){
                        count=1;bre=1;break;
                    }
                }
            }
            if(bre==1){break;}
        }
    }
    if(count==1){cout<<"PENTA KILL!"<<endl;}
    else{
        cout<<"SAD:("<<endl;
    }

    return 0;
}