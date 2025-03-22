#include<bits/stdc++.h>
using namespace std;
int main(){
    int stu;
    cin>>stu;
    int arr[stu][4],arrt[stu],i,j;

    for( i=0;i<stu;i++){
        arrt[i]=0;
        for( j=0;j<4;j++){
            cin>>arr[i][j];
            arrt[i]+=arr[i][j];
        }
    }
    int tho=arrt[0];
    //cout<<tho<<endl;
    sort(arrt,arrt+stu);
    for( i=stu-1, j=1;i>=0;i--,j++){
        if(tho==arrt[i]){
            cout<<j<<endl;break;
        }
    }
    return 0;
}
 