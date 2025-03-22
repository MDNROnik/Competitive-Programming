#include<bits/stdc++.h>
using namespace std;
int main(){
    long long ren,index;
    cin>>ren>>index;
    long long div,even;

    if(ren%2==0){div=ren/2;}
    else{div=(ren+1)/2;}

    if(div>=index){
        cout<<index+(index-1)<<endl;;
    }
    else{
        even=index-div;cout<<even+even<<endl;
    }



    return 0;
}


 