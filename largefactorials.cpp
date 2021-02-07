#include<iostream>
using namespace std;
int multi(int i, int arr[], int arr_size);


void factorial(int n){
	int arr[1000000];
	arr[0]=1;
	int arr_size=1;
	for(int i=1; i<=n; i++){
		arr_size=multi(i,arr,arr_size);
	}
	for(int i=arr_size-1; i>=0; i--){
		cout<<arr[i];
	}
}


int multi(int i, int arr[], int arr_size){
	int c=0;
	for(int j=0; j<arr_size; j++){
		int a=arr[j]*i+c;
		arr[j]=a%10;
		c=a/10;
	}
	while(c){
		arr[arr_size]=c%10;
		c=c/10;
		arr_size++;
	}
	return arr_size;
}


int main() {
	int n;
	cin>>n;
	factorial(n);
	
	return 0;
}