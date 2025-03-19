#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int n;
    int cou=0,cc=0;
    cin>>n;
    string s2;
    while(n--){
        cin>>s2;
        if(s.size()==s2.size()){
                int count=0;
                for(int i=0;i<s2.size();i++){
                char c=s2[i];
                int x = (int)c;
                char c2= s[i];
                int x2= (int)c2;

                //cout<<x<<" "<<x2<<endl;
                if(s[i]==s2[i]){count++;}
                else if(x+32 == x2){count++;}
                else if(x-32 == x2){count++;}
                else if((s2[i]=='o' || s2[i]=='O' || s2[i]=='0') && (s[i]=='o' || s[i]=='O' || s[i]=='0') ){
                    count++;
                }
                else if(s2[i]=='1' && (s[i]=='i' || s[i]=='l' || s[i]=='I' || s[i]=='L')){
                    count++;
                }
                else if(s2[i]=='i' && (s[i]=='1' || s[i]=='l' || s[i]=='I' || s[i]=='L')){
                    count++;
                }
                else if(s2[i]=='I' && (s[i]=='1' || s[i]=='l' || s[i]=='i' || s[i]=='L')){
                    count++;
                }
                else if(s2[i]=='l' && (s[i]=='1' || s[i]=='I' || s[i]=='i' || s[i]=='L')){
                    count++;
                }
                else if(s2[i]=='L' && (s[i]=='1' || s[i]=='I' || s[i]=='i' || s[i]=='l')){
                    count++;
                }
                else if(s2[i]=='_' && s[i]=='_'){
                    count++;
                }
            }
            //cout<<count<<endl;

            if(count==s.size()){
                cou=1;
            }
        }
    }

    if(cou==0){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    return 0;
}