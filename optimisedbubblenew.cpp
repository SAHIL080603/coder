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
	for (int i=0; i<=n; i++){
		int count=0;
		for (int j = 0; j <=n-i-2 ; j++){//optimization look in for('here') carefully
			if(arr[j]>arr[j+1]){
				count++;
				swap(arr[j],arr[j+1]);
			}

		}
		if(count==0){ //no swapping is done 
			break;
		}
	}
	for (int i=0; i<n; i++){
		cout<<arr[i];
	}
	return 0;
}