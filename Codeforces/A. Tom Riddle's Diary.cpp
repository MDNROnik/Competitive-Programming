#include<bits/stdc++.h>
#include<iostream>
#include <string>
#include <sstream>
using namespace std;
int main(){
    list<string>li;
    list<string>::iterator it;
    int num,si,cour=0;
    cin>>num;
    string s;
    while(num--){
        cin>>s;
        li.push_back(s);
        si=li.size();
        it=li.begin();
        for(int i =0;i<si-1;i++){
            if(*it==s){cour++;break;}
            else{}
            it++;
        }
        if(cour==0){cout<<"NO"<<endl;}
        else{cout<<"YES"<<endl;}
        cour=0;
    }


    return 0;
}
















































/*#include<bits/stdc++.h>
#include<iostream>
#include <string>
#include <sstream>
using namespace std;
int main(){
    int num,i=0,n=0,k=0;
    cin>>num;
    int arr[num];
    vector<int>vec;
    string s;
    while(num--){
        cin>>s;
        n=0;k=0;
        for(int j=0;j<s.size();j++){
            n+=s[j]-'0';
        }
        vec.push_back(n);
        //cout<<arr[i]<<endl;
        i++;
        for(int j=0;j<vec.size();j++){
            if(vec[j]==n){
                //cout<<"YES"<<endl;
            }
            else{
                //cout<<"NO"<<endl;
                k++;
            }
        }
        //cout<<k<<" "<<vec.size()<<endl;
        if(k==vec.size()-1){cout<<"NO"<<endl;}
        else{cout<<"YES"<<endl;}
    }



    return 0;
}

*/




 