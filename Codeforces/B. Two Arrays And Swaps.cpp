#include<bits/stdc++.h>
#include<list>
using namespace std;
int main(){
    int test;cin>>test;

    while(test--){
        int num,mov;
        cin>>num>>mov;
        int ar[num],br[num],mas=0,sum=0,temp=0;
        int k=0,j=num-1;
        //cout<<k<<endl;
        for(int i=0;i<num;i++){
            cin>>ar[i];
            sum+=ar[i];
        }
        mas=sum;
        sort(ar,ar+num);
        for(int i=0;i<num;i++){
            cin>>br[i];
        }
        sort(br,br+num);
        sum=0;
        while(mov--){
            //cout<<ar[k]<<endl<<br[j]<<endl;
            sum=0;
            temp=ar[k];
            ar[k]=br[j];
            br[j]=temp;
            //cout<<ar[k]<<endl<<br[j]<<endl;

            for(int i=0;i<num;i++){
                sum+=ar[i];
            }
            //cout<<mas<<endl<<sum<<endl;
            if(mas<sum){
                mas=sum;
            }
            k++;j--;
        }
        cout<<mas<<endl;

    }

    return 0;
}