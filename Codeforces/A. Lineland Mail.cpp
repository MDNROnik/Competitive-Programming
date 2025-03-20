#include <bits/stdc++.h>
using namespace std;
int main(){
    int test,num,min1,min2,max1,max2;
    cin>>test;
    vector<int>vec;
    for(int i=0;i<test;i++){
        cin>>num;
        vec.push_back(num);
    }
    for(int i=0;i<test;i++){
        if(i==0){
            cout<<vec[i+1]-vec[i]<<" ";
        }
        else if(i+1==test){
            cout<<vec[i]-vec[i-1]<<" ";
        }
        else{
            min1=vec[i]-vec[i-1];
            min2=vec[i+1]-vec[i];
            //cout<<"middle "<<min1<<" "<<min2<<endl;
            if(min1<=min2){
                cout<<min1<<" ";
            }
            else{
                cout<<min2<<" ";
            }
        }
        //Max
        if(i==0){
            cout<<vec[test-1]-vec[i]<<endl;
        }
        else if(i+1==test){
            cout<<vec[i]-vec[0]<<endl;
            //cout<<vec[0]<<" "<<vec[i]<<endl;
        }
        else {
            max1=vec[i]-vec[0];
            max2=vec[test-1]-vec[i];
            //cout<<"Max Middle"<<" "<<max1<<" "<<max2<<endl;
            if(max1>=max2){
                cout<<max1<<endl;
            }
            else{
                cout<<max2<<endl;
            }
        }
    }


    return 0;
}

 