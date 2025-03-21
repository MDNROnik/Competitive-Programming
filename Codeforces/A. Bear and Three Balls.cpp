#include <bits/stdc++.h>
using namespace std;
int main(){
    int num,n=0,c=0,count=0,n1,n2,k=0;
    cin>>num;
    int vec[num];
    set<int>se;
    set<int>::iterator it,it2;
    for(int i=0;i<num;i++){
        cin>>n;
        se.insert(n);
    }
    int siz=se.size();
    for(it=se.begin();it!=se.end();it++){
        it2=it;
        ++it2;
        n1=*it2-*it;k+=1;
        ++it2;
        n2=*it2-*it;k+=1;

        if(n1<=2 && n2<=2 && n2>0 && k!=siz){
            c=1;break;
        }
        k-=1;
    }
    if(c==1){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }

    return 0;
}



 