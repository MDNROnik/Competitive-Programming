#include <bits/stdc++.h>
using namespace std;
int main(){
    long long i,finalc=0,count=0,n=14,a,ii,am,a2,am2;
    long long arr[n],arr2[n];
    for(int i=0;i<n;i++){
        cin>>arr2[i];
    }
    for(int i=0;i<n;i++){
        memcpy(arr, arr2, sizeof(arr2));
        if(arr[i]>0){
            a=arr[i];ii=i;arr[i]=0;
            if(ii+1==n){ii=0;}
            else{
                ii++;
            }
            am=0;a2=0;am2=0;
            am=a/14;
            a2=am*14;
            am2=a-a2;
            //cout<<am<<" "<<a2<<" "<<am2<<" "<<endl;
            while(a2>0){
                arr[ii]+=am;
                a2-=am;
                ii++;
                if(ii==n){
                    ii=0;
                }
            }
            while(am2--){
                arr[ii]+=1;
                ii++;
                if(ii==n){
                    ii=0;
                }
            }

            count=0;
            for(int i=0;i<n;i++){
                //cout<<arr[i]<<" ";
                if(arr[i]%2==0){count+=arr[i];}
            }
            //cout<<endl;
            //cout<<count<<endl;
            if(finalc<count){
                finalc=count;count=0;
            }
        }
    }

    cout<<finalc<<endl;
    return 0;
}