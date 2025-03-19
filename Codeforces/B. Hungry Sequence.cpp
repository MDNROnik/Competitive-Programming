#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  int i=3,count=0;
  while(n!=0){

    count=0;
    for(int j=2;j<=sqrt(i);j++){
        if(i % j ==0){count+=1;break;}
    }
    if(count==0){cout<<i<<" ";n--;}
    i++;
  }
  cout<<endl;


  return 0;
}