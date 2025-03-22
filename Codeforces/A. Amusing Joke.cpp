#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,s2,s3;
    cin>>s>>s2>>s3;
    sort(s.begin(),s.end());
    sort(s2.begin(),s2.end());
    sort(s3.begin(),s3.end());
    int num=s.size();int num2=s2.size();int num3=s3.size();
    int count=0,count2=0;

    //cout<<s<<" "<<s2<<" "<<s3<<endl;
    for(int i=0;i<num;i++){
        for(int j=0;j<num3;j++){
            if(s[i]==s3[j]){
                //cout<<s[i]<<" "<<s3[j]<<endl;
                count++;
                s3[j]='0';break;
            }
        }
    }
    //cout<<s<<" "<<s3<<endl;

    for(int i=0;i<num2;i++){
        for(int j=0;j<num3;j++){
            if(s2[i]==s3[j]){
                //cout<<s2[i]<<" "<<s3[j]<<endl;
                count2++;
                s3[j]='0';break;
            }
        }
    }
    //cout<<s2<<" "<<s3<<endl;

    if((count+count2)==(num+num2) && (count+count2)==num3 ){cout<<"YES"<<endl;}
    else{cout<<"NO"<<endl;}
    return 0;
}

 