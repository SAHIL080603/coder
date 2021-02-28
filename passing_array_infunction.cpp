#include <iostream>
using namespace std;
void printarray(int arr[1],int n){
	cout<<endl<<"indside print function:"<<endl;
	for(int i=0; i<n; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
void input(int arr1[],int n){ //arrays are always passed by refrence
	for (int i=0; i<n; i++){
		cin>>arr1[i];
	}
}
int main(){
	// int a[]={1,2,6,4,5,3,9,40};
	// int n=sizeof(a)/sizeof(int);
	// cout<<"indside main :"<<endl;
	// for(int i=0; i<n; i++){
	// 	cout<<a[i]<<" ";
	// }
	// printarray(a,n);
	int arr[1],m;
	cin>>m;
	input(arr,m);
	printarray(arr,m);
	return 0;
}