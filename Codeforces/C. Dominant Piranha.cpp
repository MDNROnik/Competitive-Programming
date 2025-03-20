#include <bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    int num,n,maxx,i,cou;
    vector<int>vec;

    while(test--){
        cin>>num;
        for( i=0;i<num;i++){
            cin>>n;
            vec.push_back(n);
        }
        cou=count(vec.begin(),vec.end(),vec[0]);
        if(cou==vec.size()){
            cout<<-1<<endl;
        }
        else{
            maxx=*max_element(vec.begin(), vec.end());
            for( i=0;i<num;i++){
                if(vec[i]==maxx && i==0 && vec[i+1]!=maxx){
                    break;
                }
                else if(vec[i]==maxx && i+1==num && vec[i-1]!=maxx){
                    break;
                }
                else if( vec[i]==maxx && vec[i+1] != maxx){
                    break;
                }
                else if(vec[i]!=maxx && vec[i+1]==maxx){
                    i+=1;
                    break;
                }
            }
            cout<<i+1<<endl;
        }
        vec.erase(vec.begin(),vec.end());
    }

    return 0;
}