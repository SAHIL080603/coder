#include<bits/stdc++.h>
using namespace std;
int main() {
	int arr[1000];
	int n=0,t=0;
	cin>>n;
	for (int i=0; i<n; i++){
		cin>>arr[i];
	}
	cin>>t;
	
	sort(arr,arr+n);
	for (int i=0; i<n-2; i++){
		int sum=0;
		int j=i+1;
		int k=n-1;
		//two pointer approch
			while(j<k){
				
				sum=arr[i]+arr[j]+arr[k];
				if(sum>t){
					k--;
					
				}
				else if(sum<t){
					j++;
				}
				else if (sum==t){
					int maxi=0,mini=0;
					if(arr[i]>arr[j]){
						maxi=max(arr[i],arr[k]);
						mini=min(arr[i],arr[k]);
					}
					else{
						maxi=max(arr[j],arr[k]);
						mini=min(arr[j],arr[k]);
					}
					cout<<t-maxi-mini<<", "<<mini<<" and "<<maxi<<endl;
					j++;
					k--;
				}
			}
		}
	
	return 0;
}