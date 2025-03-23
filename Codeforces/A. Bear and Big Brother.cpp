#include<bits/stdc++.h>
using namespace std;
int main()
{
    int b1,b2,year=0;
    cin>>b1>>b2;

    while(b1<=b2){
        b1=b1*3;
        b2=b2*2;
        year++;
    }
    cout<<year<<endl;

    return 0;
}


 