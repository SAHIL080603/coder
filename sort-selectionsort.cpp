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
	//selection sort
	for(int i=0; i<n-1; i++){
		int min=i;
		for(int j=i+1; j<n; j++){
			if(arr[min]>arr[j]){
				min=j;
			}
		}
		swap(arr[min],arr[i]);
	}
	for (int i=0; i<n; i++){
		cout<<arr[i];
	}
	return 0;
}