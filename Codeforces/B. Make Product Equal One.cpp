#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    long long arr[n];
    long long coin=0,x;
    int ne=0,po=0,ze=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]<0){ne++;}
        else if(arr[i]>0){po++;}
        else if(arr[i]==0){ze++;}
    }
    if(ne==po && ze==0){
        if(ne%2==0){
            for(int i=0;i<n;i++){
                if(arr[i]<0){x=-1-arr[i];coin+=x;}
                else if(arr[i]>0){coin+=arr[i]-1;x=arr[i]-1;}
                //cout<<arr[i]<<" "<<""<<x<<" "<<coin<<endl;
            }
        }
        else{
            int count=1;
            for(int i=0;i<n;i++){
                if(count==1){x=1-arr[i];coin+=x;}
                else if(arr[i]<0){x=-1-arr[i];coin+=x;}
                else if(arr[i]>0){coin+=arr[i]-1;x=arr[i]-1;}
                //cout<<arr[i]<<" "<<""<<x<<" "<<coin<<endl;
            }
        }
    }
    else if(ne==po && ze!=0){
        if(ne%2==0){
            for(int i=0;i<n;i++){
                if(arr[i]<0){x=-1-arr[i];coin+=x;}
                else if(arr[i]>0){coin+=arr[i]-1;}
                else if(arr[i]==0){coin++;}
            }
        }
        else if(ne%2!=0 && ze%2==0){
            int zc=1;
            for(int i=0;i<n;i++){
                if(arr[i]<0){x=-1-arr[i];coin+=x;}
                else if(arr[i]>0){coin+=arr[i]-1;}
                else if(arr[i]==0){coin++;}
            }
        }
        else if(ne%2!=0 && ze%2!=0){
            for(int i=0;i<n;i++){
                if(arr[i]<0){x=-1-arr[i];coin+=x;}
                else if(arr[i]>0){coin+=arr[i]-1;}
                else if(arr[i]==0){coin++;}
            }
        }

    }

    else{
        if(ne%2==0){
            for(int i=0;i<n;i++){
                if(arr[i]<0){x=-1-arr[i];coin+=x;}
                else if(arr[i]>0){coin+=arr[i]-1;}
                else if(arr[i]==0){coin++;}
            }
        }
        else if(ne>0 && ze==0 && po==0){
            if(ne%2==0){
                for(int i=0;i<n;i++){
                    if(arr[i]<0){x=-1-arr[i];coin+=x;}
                    else if(arr[i]>0){coin+=arr[i]-1;}
                    else if(arr[i]==0){coin++;}
                }
            }
            else{
                for(int i=0;i<n;i++){
                    if(arr[i]<0){x=-1-arr[i];coin+=x;}
                    else if(arr[i]>0){coin+=arr[i]-1;}
                    else if(arr[i]==0){coin++;}
                }
                coin+=2;
            }
        }
        else if(ne%2!=0 && ze%2==0){
            int zc=1;
            //cout<<"HERE"<<endl;
            if(ze==0){
                for(int i=0;i<n;i++){
                    if(arr[i]<0){x=-1-arr[i];coin+=x;}
                    else if(arr[i]>0){coin+=arr[i]-1;}
                    else if(arr[i]==0){coin++;}
                }
                coin+=2;
            }
            else{
                for(int i=0;i<n;i++){
                   if(arr[i]<0){x=-1-arr[i];coin+=x;}
                   else if(arr[i]>0){coin+=arr[i]-1;}
                   else if(arr[i]==0){coin++;}
                }
            }
        }
        else if(ne%2!=0 && ze%2!=0){
            if(ze==0){
                for(int i=0;i<n;i++){
                    if(arr[i]<0){x=-1-arr[i];coin+=x;}
                    else if(arr[i]>0){coin+=arr[i]-1;}
                    else if(arr[i]==0){coin++;}
                }
                coin+=2;
            }
            else{
                for(int i=0;i<n;i++){
                   if(arr[i]<0){x=-1-arr[i];coin+=x;}
                   else if(arr[i]>0){coin+=arr[i]-1;}
                   else if(arr[i]==0){coin++;}
                }
            }
        }

    }




    cout<<coin<<endl;
    return 0;
}