#include<bits/stdc++.h>
using namespace std;
int main(){
   int num,fri,n,f=0;
   cin>>num>>fri;
   f=fri;
   vector<int>vec;

   if(num%fri==0){
        n=num/fri;
        for(int i=0;i<fri;i++){
            cout<<n<<" ";
        }
        cout<<endl;
   }
   else{
       while(num%fri!=00){
            n=num/fri;
            vec.push_back(n);
            num-=n;
            fri--;
            //cout<<num<<" "<<fri<<endl;
       }
       n=num/fri;
       for(int i=0;i<fri;i++){
            vec.push_back(n);
       }
       //cout<<vec.size()<<endl;
       //cout<<vec[0]<<vec[1]<<vec[2]<<vec[3];
       for(int i=0;i<f;i++){
            cout<<vec[i]<<" ";
       }
   }
   return 0;
}
 