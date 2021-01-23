//https://hack.codingblocks.com/app/contests/2049/1083/problem
#include<iostream>
using namespace std;
int main() {
	int t;
	cin>>t;
	while (t--){
		int n,f=0;
		cin>>n;
		int arr[n];
		for (int i=0; i<n; i++){
			cin>>arr[i];
		}
		int no=(1<<n);
		
			for (int i=1; i<no; i++){
				int temp=i,p=0,sum=0;
				//check for setbits
				while(temp>0){
					if(temp & 1){
						sum+=arr[p];
					}
					p++;
					temp=temp>>1;
				}
				if (sum==0){
					
					f=1;
					break;
				}
			}
			
		
		if(f==1){
			cout<<"Yes"<<endl;
		}
		else{
			cout<<"No"<<endl;
		}
		
		
	}
	
	return 0;
}