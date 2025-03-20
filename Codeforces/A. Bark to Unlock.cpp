#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int n,sw=0,lf=1,ff=1,llf=1,done=0;
    cin>>n;
    int i=0;
    string s1;
    while(i<n){
        cin>>s1;
        if(s1==s){
            done=1;break;
        }
        if(sw==0){
            if(s1[0]==s[0]){
                sw++;
                ff=0;
            }
            else if(s1[0]==s[1]){
                sw++;
                lf=0;
            }
            else if(s1[1]==s[0]){
                sw++;
                llf=0;
            }
        }
        if(lf==0){
            if(s1[1]==s[0]){
                done=1;
                break;
            }
        }
        else if(ff==0){
            if(s1[1]==s[1] && s1[0]==s[0]){
                done=1;
                break;
            }
            if(s1[0]==s[1]){
                sw++;
                lf=0;
            }

            if(lf==0){
                if(s1[1]==s[0]){
                    done=1;
                    break;
                }
                else if(s1[1]==s[1]){
                    done=1;
                    break;
                }
            }
        }
        else if(llf==0){
            if(s1[0]==s[1]){
                done=1;
                break;
            }
        }
        i++;
    }
    if(done==1){
        cout<<"YES"<<endl;
    }
    else if(n==1 ){
        //cout<<s[0]<<" "<<s[1]<<endl;
        int c=count(s1.begin(),s1.end(),s[0]);
        if(c==1){
            s1[0]='0';
        }
        int c1=count(s1.begin(),s1.end(),s[1]);
        if(c==1 && c1==1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}