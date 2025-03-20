#include <bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cin>>num;
    string s[num];
    vector<int>vec(num);
    int ss,us,a,b,c,d,e,total;
    for(int i=0;i<num;i++){
        cin>>s[i];
        cin>>ss>>us>>a>>b>>c>>d>>e;
        total=0;
        total=(ss*100)-(us*50);
        if(150<=a<=500){
            total+=a;
        }
        if(300<=b<=1000){
            total+=b;
        }
        if(450<=c<=1500){
            total+=c;
        }
        if(600<=d<=2000){
            total+=d;
        }
        if(750<=e<=2500){
            total+=e;
        }
        vec[i]=total;
    }
    int maxx=0,index=0;
    maxx=vec[0];
    for(int i=1;i<num;i++){
        //cout<<maxx<<" "<<vec[i]<<endl;
        if(maxx<vec[i]){
            maxx=vec[i];index=i;
        }
    }
    cout<<s[index]<<endl;

    return 0;
}