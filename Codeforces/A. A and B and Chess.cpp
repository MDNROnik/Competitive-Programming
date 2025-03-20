#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    int i=0,j=0,black=0,white=0;
    for(j=1;j<=8;j++){
        cin>>s;
        for(i=0;i<s.size();i++){
            if(s[i]!='.'){
                break;
            }
        }
        if(j<=4){
            if(s[i]=='q' || s[i]=='r' ||s[i]=='b' ||s[i]=='n' ||s[i]=='p' ||s[i]=='k'){
                for(i=0;i<s.size();i++){
                    if(s[i]=='q'){
                        black+=9;
                    }
                    else if(s[i]=='r'){
                        black+=5;
                    }
                    else if(s[i]=='b'){
                        black+=3;
                    }
                    else if(s[i]=='n'){
                        black+=3;
                    }
                    else if(s[i]=='p'){
                        black+=1;
                    }
                    else if(s[i]=='k'){
                        black+=0;
                    }
                    else if(s[i]=='.'){

                    }
                    else{
                        if(s[i]=='Q'){
                            white+=9;
                        }
                        else if(s[i]=='R'){
                            white+=5;
                        }
                        else if(s[i]=='B'){
                            white+=3;
                        }
                        else if(s[i]=='N'){
                            white+=3;
                        }
                        else if(s[i]=='P'){
                            white+=1;
                        }
                        else if(s[i]=='K'){
                            white+=0;
                        }
                    }
                }
            }
            else{
                for(i=0;i<s.size();i++){
                    if(s[i]=='Q'){
                        white+=9;
                    }
                    else if(s[i]=='R'){
                        white+=5;
                    }
                    else if(s[i]=='B'){
                        white+=3;
                    }
                    else if(s[i]=='N'){
                        white+=3;
                    }
                    else if(s[i]=='P'){
                        white+=1;
                    }
                    else if(s[i]=='K'){
                        white+=0;
                    }
                    else if(s[i]=='.'){

                    }
                    else{
                        if(s[i]=='q'){
                            black+=9;
                        }
                        else if(s[i]=='r'){
                            black+=5;
                        }
                        else if(s[i]=='b'){
                            black+=3;
                        }
                        else if(s[i]=='n'){
                            black+=3;
                        }
                        else if(s[i]=='p'){
                            black+=1;
                        }
                        else if(s[i]=='k'){
                            black+=0;
                        }
                    }
                }
            }
        }
        if(j>4){
            if(s[i]=='q' || s[i]=='r' ||s[i]=='b' ||s[i]=='n' ||s[i]=='p' ||s[i]=='k'){
                for(i=0;i<s.size();i++){
                    if(s[i]=='q'){
                        black+=9;
                    }
                    else if(s[i]=='r'){
                        black+=5;
                    }
                    else if(s[i]=='b'){
                        black+=3;
                    }
                    else if(s[i]=='n'){
                        black+=3;
                    }
                    else if(s[i]=='p'){
                        black+=1;
                    }
                    else if(s[i]=='k'){
                        black+=0;
                    }
                    else if(s[i]=='.'){

                    }
                    else{
                        if(s[i]=='Q'){
                            white+=9;
                        }
                        else if(s[i]=='R'){
                            white+=5;
                        }
                        else if(s[i]=='B'){
                            white+=3;
                        }
                        else if(s[i]=='N'){
                            white+=3;
                        }
                        else if(s[i]=='P'){
                            white+=1;
                        }
                        else if(s[i]=='K'){
                            white+=0;
                        }
                    }
                }
            }
            else{
                for(i=0;i<s.size();i++){
                    if(s[i]=='Q'){
                        white+=9;
                    }
                    else if(s[i]=='R'){
                        white+=5;
                    }
                    else if(s[i]=='B'){
                        white+=3;
                    }
                    else if(s[i]=='N'){
                        white+=3;
                    }
                    else if(s[i]=='P'){
                        white+=1;
                    }
                    else if(s[i]=='K'){
                        white+=0;
                    }
                    else if(s[i]=='.'){

                    }
                    else{
                        if(s[i]=='q'){
                            black+=9;
                        }
                        else if(s[i]=='r'){
                            black+=5;
                        }
                        else if(s[i]=='b'){
                            black+=3;
                        }
                        else if(s[i]=='n'){
                            black+=3;
                        }
                        else if(s[i]=='p'){
                            black+=1;
                        }
                        else if(s[i]=='k'){
                            black+=0;
                        }
                    }
                }
            }
        }
    }
    if(black<white){
        cout<<"White"<<endl;
    }
    else if(black>white){
        cout<<"Black"<<endl;
    }
    else{
        cout<<"Draw"<<endl;
    }
    return 0;
}