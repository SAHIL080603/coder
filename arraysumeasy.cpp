#include<iostream>
using namespace std;
int arr[1000]={0};
int arr1[1000]={0};
int summer(int n,int n1){
	int num=0;
	for (int i=0; i<n; i++){
		num=num*10+arr[i];
	}
	int num1=0;
	for (int i=0; i<n1; i++){
		num1=num1*10+arr1[i];
	}
	
	return num+num1;
}
int main() {
	int n,num=0;
	cin>>n;
	for (int i=0; i<n; i++){
		cin>>arr[i];
		
	}
	int n1,num1=0;
	cin>>n1;
	for (int i=0; i<n1; i++){
		cin>>arr1[i];
		
	}
	int sum=summer(n,n1);
	int arr2[1000]={0};
	int i=0;
	while (sum!=0){
		arr2[i]=sum%10;
		sum/=10;
		i++;
	}
	for (int j=i-1; j>=0; j--){
		cout<<arr2[j]<<", ";
	}
	cout<<"END";
	return 0;
}