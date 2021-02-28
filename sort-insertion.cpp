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
	//insertion sort
	int i;
	int j;
	for (i=1; i<=n-1; i++){
		int current=arr[i];
		
		for (j=i-1; j>=0 && arr[j]>current; j--){ 
			
			arr[j+1]=arr[j];
		

		}
		arr[j+1]=current;
	
	}
	for (int i=0; i<n; i++){
		cout<<arr[i];
	}
	return 0;
}