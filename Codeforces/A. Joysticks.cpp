#include<bits/stdc++.h>
using namespace std;
int main(){
    int n1,n2;
    cin>>n1>>n2;
    int count=0;
    if(n1==n2 && n1==1){
        cout<<0<<endl;
    }
    else if(n1<n2){
        n1++;
        n2-=2;
        int first=0,second=1;
        count=1;
        while(1){
            //cout<<count<<" "<<n1<<" "<<n2<<endl;;
            if(n1==0 || n2==0){
                break;
            }
            if (n1==n2 && n1!=1){
                n1++;n2-=2;
                first=1,second=1;
            }
            else if(n1==1 || n1<n2){
                first=0,second=1;
            }
            else if(n2==1 || n1>n2){
                second=0,first=1;
            }
            if(first==0){
                n1++;n2-=2;
            }
            else if(second==0){
                n2++;n1-=2;
            }
            count++;
        }
        cout<<count<<endl;
    }
    else if(n1>n2){
        n1-=2;
        n2++;
        int first=1,second=0;
        count=1;
        while(1){
            if(n1==0 || n2==0){
                break;
            }
            if (n1==n2 && n1!=1){
                n1++;n2-=2;
                first=1,second=1;
            }
            else if(n1==1 || n1<n2){
                first=0,second=1;
            }
            else if(n2==1 || n1>n2){
                second=0,first=1;
            }
            if(first==0){
                n1++;n2-=2;
            }
            else if(second==0){
                n2++;n1-=2;
            }
            count++;
        }
        cout<<count<<endl;
    }
    else if(n1==n2){
        n1++;
        n2-=2;
        int first=0,second=1;
        count=1;
        while(1){
            //cout<<count<<" "<<n1<<" "<<n2<<endl;;
            if(n1==0 || n2==0){
                break;
            }
            if (n1==n2 && n1!=1){
                n1++;n2-=2;
                first=1;second=1;
            }
            else if(n1==1 || n1<n2){
                first=0,second=1;
            }
            else if(n2==1 || n1>n2){
                second=0,first=1;
            }

            if(first==0){
                n1++;n2-=2;
            }
            else if(second==0){
                n2++;n1-=2;
            }
            count++;
        }
        cout<<count<<endl;
    }
    return 0;
}