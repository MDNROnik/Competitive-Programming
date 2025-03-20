#include <bits/stdc++.h>
#include<algorithm>
using namespace std;
int main(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int n1,n2;
    n1=(a*3)/10;
    n2=a-(a/250)*c;
    int nm=max(n1,n2);

    int n11,n22;
    n11=(b*3)/10;
    n22=b-(b/250)*d;
    int nm2=max(n11,n22);
    if(nm<nm2){
        cout<<"Vasya"<<endl;
    }
    else if(nm>nm2){
        cout<<"Misha"<<endl;
    }
    else{
        cout<<"Tie"<<endl;
    }

    return 0;
}
 