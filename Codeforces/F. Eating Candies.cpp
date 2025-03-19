#include <bits/stdc++.h>
using namespace std;
#define intl long long
int main(){
    int test;
    cin>>test;
    while(test--){
        long long n;
        cin>>n;
        long long arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        long long r=0,l=0,ri=1,li=n-2;
        r=arr[0];l=arr[n-1];
        int count=2,c=0;
        n-=1;
        list<int>lis;
        list<int>::iterator it;
        while(n--){
            //cout<<r<<" "<<l<<endl;
            if(r==l){
                lis.push_front(count);
                r+=arr[ri];ri++;count++;;
            }
            else if(r<l){
                r+=arr[ri];count++;ri++;
            }
            else if(r>l){
                l+=arr[li];count++;li--;
            }
        }
        it=lis.begin();
        cout<<*it<<endl;
    }

    return 0;
}