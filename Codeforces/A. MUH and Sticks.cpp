#include <bits/stdc++.h>
using namespace std;
int main(){
	int arr[6],coun1=0,coun2=0,num=0;
	for(int i=0;i<6;i++){
        cin>>arr[i];
	}
	vector<int>vec;
	for(int i=0;i<6;i++){
        coun1=count(arr, arr + 6, arr[i]);
        //cout<<coun1<<endl;
        if(coun1>=4){
            num=arr[i];
            break;
        }
	}
	for(int i=0;i<6;i++){
        if(arr[i]==num && coun2<4){
            arr[i]=-1;
            coun2++;
        }
	}
	for(int i=0;i<6;i++){
        if(arr[i]==-1){

        }
        else{
            vec.push_back(arr[i]);
        }
	}
	if(coun1>=4){
        if(vec[0]==vec[1]){
            cout<<"Elephant"<<endl;
        }
        else{
            cout<<"Bear"<<endl;
        }
	}
	else{
        cout<<"Alien"<<endl;
	}
	return 0;
}