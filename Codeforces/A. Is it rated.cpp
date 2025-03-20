#include <bits/stdc++.h>
using namespace std;
int main(){
    int num,n=0;
    cin>>num;
    vector<int>vec1(num);
    vector<int>vec2(num);
    for(int i=0;i<num;i++){
        cin>>vec1[i]>>vec2[i];
        if(vec1[i]==vec2[i]){
            n++;
        }
    }
    if(n==num){
        int n2=vec1[0],sw=0,se=0;
        for(int i=1;i<num;i++){
            //cout<<"loop"<<endl;
            //cout<<n2<<"  "<<vec1[i]<<endl;
            if(n2>=vec1[i]){
                n2=vec1[i];
            }
            else{
                sw=1;break;
            }
        }
        //cout<<sw<<endl;
        if(sw==1){
            cout<<"unrated"<<endl;
        }
        else{
            cout<<"maybe"<<endl;
        }
    }
    else{
        cout<<"rated"<<endl;
    }

    return 0;
}
 