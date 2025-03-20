#include<iostream>
using namespace std;

int main()
{
    int num,n,f=0,s=0;
    cin>>num;
    int vec[num];
    for(int i=0;i<num;i++){
        cin>>vec[i];
    }
    sort(vec,vec+num);
    f=vec[num-1];
    for(int i=num-2;i>=0;i--){
        if(s<f){
            s+=vec[i];
        }
        else{
            f+=vec[i];
        }
    }
    if(s==f){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}