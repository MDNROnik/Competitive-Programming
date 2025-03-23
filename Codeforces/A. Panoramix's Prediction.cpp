#include <bits/stdc++.h>
using namespace std;
int main(){
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    int n,n2,i,j,count=0,count2=0,finds=0;
    cin>>n>>n2;

    int sq=sqrt(n);
    for(i=2;i<=sq;i++){
        if(n%i==00){
            count++;
            break;
        }
    }
    if(count==0){
        for( i=n+1;i<=50;i++){
            count2=0;
        for( j=2;j<=i/2;j++){
            if(i%j==00){
                count2++;
                break;
            }
        }
        if(count2==0){finds=i;break;}
      }
      if(finds==n2){cout<<"YES"<<endl;}
      else{cout<<"NO"<<endl;}
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}
 