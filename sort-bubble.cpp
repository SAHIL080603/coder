#include <iostream>
using namespace std;
int main(){
	int arr[100];
	int n;
	cout<<"enter number of elements== ";
	cin>>n;
	for (int i=0; i<n; i++){
		cin>>arr[i];
	}
	//bubble sort
	for (int i=0; i<=n-2; i++){
		for (int j = 0; j <=n-2 ; j++){
			if(arr[j]>arr[j+1]){
			//SWAPPING
				// 1)==1st way by using another varable
				//		int temp=0;
				//		temp=arr[j];
				// 		arr[j]=arr[j+1];
				// 		arr[j+1]=temp;
				// 2)==2nd way without a variable
				// 		arr[j]=arr[j]+arr[j+1];
				//		arr[j+1]=arr[j]-arr[j+1];
				// 		arr[j]=arr[j]-arr[j+1];
				// 3)==in built swap
						swap(arr[j],arr[j+1]);
				// 4)==one line swap
				// 		arr[j+1]=arr[j]+arr[j+1]-(arr[j]=arr[j+1]);
			}
		}
	}
	for (int i=0; i<n; i++){
		cout<<arr[i];
	}
	return 0;
}