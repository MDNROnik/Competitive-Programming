#include<bits/stdc++.h>
using namespace std;
int main(){
    double con,num,i=0,total=0;
    cin>>con;
    while(i<con){
        cin>>num;
        total+=num;
        i++;
    }
    double d=total/con;
    cout<<fixed<<setprecision(12)<<d<<endl;

	return 0;
}