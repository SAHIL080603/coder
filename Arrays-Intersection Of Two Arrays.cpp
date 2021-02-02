//https://hack.codingblocks.com/app/contests/2049/173/problem
#include<iostream>
#include <climits>
using namespace std;
int count(int arr[],int n,int k){  //count the number of ocuurences of a element
	int c=0;
	for (int i=0; i<n; i++){
		if(k==arr[i]){
			arr[i]=INT_MIN;
			c++;
		}
	}
	return c;
}
int main() {
	int arr1[100000];
	int arr2[100000];
	int ans[100000];
	int n;
	cin>>n;
	for (int i=0; i<n; i++){
		cin>>arr1[i];
	}
	for (int i=0; i<n; i++){
		cin>>arr2[i];
	}
	int j=0;
	for(int i=0; i<n; i++){  //traversing through arr1
		int a=arr1[i];
		if(a==INT_MIN){  //restarting the loop if encountered INT-MIN
			continue;
		}
		int c1=count(arr1,n,a);
		int c2=count(arr2,n,a);
		if(c1==0 || c2==0){
			continue;
		}
		int cm=0;
		(c1>=c2)?cm=c2:cm=c1;
		while(cm--){
			ans[j]=a;   //storing common elements
			j++;
		}

	}
	cout<<'[';
	for(int i=0; i<j; i++){
		if(i==j-1){
			cout<<ans[i];
			break;
		}
		cout<<ans[i]<<", ";

	}
	cout<<']';
	return 0;
}