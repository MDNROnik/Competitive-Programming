#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[5][5],ipos=0,jpos,sw=0;
    int i,j,ii,jj;
    for( i=0;i<5;i++){
        for( j=0;j<5;j++){
            cin>>arr[i][j];
            if(arr[i][j]==1){ipos=i;jpos=j;}
        }
    }

    if(ipos<=2){
        sw+=(2-ipos);
    }
    else{
        sw+=(ipos-2);
    }
    if(jpos<=2){
        sw+=(2-jpos);
    }
    else{
        sw+=(jpos-2);
    }
    cout<<sw<<endl;




    return 0;
}


 