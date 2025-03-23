#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,x,y,z,z2,z3,z4,z5,z6,z7,ans=0;
    cin>>a>>b>>c;

    x=a+b*c;
    if(x>ans){ans=x;}
    y=a*(b+c);
    if(y>ans){ans=y;}
    z=a*b*c;
    if(z>ans){ans=z;}
    z2=(a+b)*c;
    if(z2>ans){ans=z2;}
    z3=a+b+c;
    if(z3>ans){ans=z3;}

    z4=a*b+c;
    if(z4>ans){ans=z4;}

    z5=a+(b*c);
    if(z5>ans){ans=z5;}

    z6=(a*b)+c;
    if(z6>ans){ans=z6;}

    cout<<ans<<endl;
	return 0;
}






 