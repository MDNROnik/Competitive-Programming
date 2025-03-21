#include <bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    int n,l,r,k,num,count=0,j=0,num2=0;
    vector<int>vec;
    while(test--){
        cin>>n>>l>>r>>k;
        for(int i=0;i<n;i++){
            cin>>num;
            if(num<l || num>r){
            }
            else{
                //cout<<num<<endl;
                vec.push_back(num);
            }
        }
        sort(vec.begin(),vec.end());

        /*for(int i=0;i<vec.size();i++){
            cout<<vec[i]<<" ";
        }*/

        //cout<<vec[j]<<endl;
        if(vec.size()!=0){
            for(int i=0;i<vec.size();i++){
                if(k-vec[i]>=0){
                    count++;
                    k-=vec[i];
                }
                else{
                    break;
                }
            }
        }
        cout<<count<<endl;count=0;
        vec.erase(vec.begin(),vec.end());
    }
    return 0;
}

 