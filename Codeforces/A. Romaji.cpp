#include<bits/stdc++.h>
#include <string>
#include <sstream>
using namespace std;
int main(){
    int i,count=0,count2=0,countn=0;
    string s;
    cin>>s;
    for(i=0;i<s.size();i++){
        if(s[i] =='a' || s[i] =='o' || s[i] =='u' || s[i] =='i' || s[i]=='e' ){
            count++;
        }
        if(s[i]=='n'){
            countn++;
            //cout<<s[i]<<" ";
        }
    }
    for(i=0;i<s.size();i++){
        if(s[i] =='a' || s[i] =='o' || s[i] =='u' || s[i] =='i' || s[i]=='e'){
            if(s[i-1] !='a' && s[i-1] !='o' && s[i-1] !='u' && s[i-1] !='i' && s[i-1]!='e' && s[i-1] !='n' && i-1>=0){
                count2++;
                //cout<<s[i-1]<<endl;
            }
        }
    }
    //cout<<count<<endl;
    int si=s.size()-count;
    si-=countn;
    //cout<<s.size()<<endl;
    //cout<<" v "<<count<<endl;
    //cout<<" n "<<countn<<endl;
    //cout<<" without n cons "<<si<<endl;
    //cout<<" find "<<count2<<endl;
    //cout<<countn<<endl;
    if(count2==si){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

    return 0;
}






 