#include<bits/stdc++.h>
using namespace std;
int main(){
    int s,n,count=0,temp=0,i,j,temp2=0;
    cin>>s>>n;
    int ds[n],ks[n];
    int n2=n;
    for(i=0;i<n;i++){
        cin>>ds[i]>>ks[i];
    }
    for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(ds[i]>ds[j])
			{
				temp  =ds[i];
				ds[i]=ds[j];
				ds[j]=temp;
				temp2  =ks[i];
				ks[i]=ks[j];
				ks[j]=temp2;
			}
		}
	}
	for(i=0;i<n;i++){
        if(ds[i]<s){s+=ks[i];count++;}
        else{cout<<"NO"<<endl;break;}
    }

    if(count==n2){cout<<"YES"<<endl;}
    return 0;
}

 