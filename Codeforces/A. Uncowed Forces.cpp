#include <bits/stdc++.h>
using namespace std;
int main(){
    double sub[5];
    for(int i=0;i<5;i++){
        cin>>sub[i];
    }
    double wro[5];
    for(int i=0;i<5;i++){
        cin>>wro[i];
    }
    double sh,ush;
    cin>>sh>>ush;

    double total=0,n,n2;
    double point=500;

    for(int i=0;i<5;i++){
        n2=(.3*point);
        n=(1-(sub[i]/250));
        n*=point;
        n-=(wro[i]*50);

        if(n<n2){total+=n2;}
        else{total+=n;}

        point+=500;
    }
    //cout<<total<<endl;
    double total2=(sh*100)-(ush*50);
    cout<<total+total2<<endl;



    return 0;

}