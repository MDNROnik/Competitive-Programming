#include <bits/stdc++.h>
using namespace std;
int main(){
	 int count=0,siz=0,j=0;
	 string s,t;
	 cin>>s>>t;
	 if(s.size()==t.size()){
        for(int i=1;;i++){
            if(t[t.size()-i] != s[s.size()-i]){
                cout<<(t.size()-(i-1))+(s.size()-(i-1));break;
            }
            else{
                j++;
            }
            //cout<<j<<" "<<s.size()<<endl;
            if(j==s.size()){
                count=0;break;
            }
        }
	 }
	 else if(s.size()>t.size()){
        for(int i=1;;i++){
            if(t[t.size()-i] != s[s.size()-i]){
                cout<<(t.size()-(i-1))+(s.size()-(i-1));break;
            }
        }
	 }
	 else if(s.size()<t.size()){
        for(int i=1;;i++){
            if(t[t.size()-i] != s[s.size()-i]){
                cout<<(t.size()-(i-1))+(s.size()-(i-1));break;
            }
        }
	 }
	 if(j==s.size()){
        cout<<count<<endl;
	 }
	 return 0;
}
 