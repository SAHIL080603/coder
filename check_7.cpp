#include <iostream>
using namespace std;

bool is7persent(int *arr, int n){
	//basee case
	if (n==0){
		return false;
	}
	if(arr[0]==7){
		return true;
	}
	return is7persent(arr+1,n-1);

} 

int first7(int *arr, int n,int i){
	//basee case
	if (i>=n){
		return -1;
	}
	//reursive case
	if(arr[i]==7){
		return i;
	}
	return first7(arr,n,i+1);

}
int all7(int *arr, int n,int i){
	//basee case
	if (i==n){
		return -1;
	}
	//reursive case
	if(arr[i]==7){
		cout<< i<<" ";
	}
	return all7(arr,n,i+1);

} 

int last7(int *arr, int n){
	//basee case
	if (n==0){
		return -1;
	}
	//reursive case
	if(arr[n-1]==7){
		return n-1;
	}
	return last7(arr,n-1);

} 
int main(){
	int arr[]={1,2,6,7,9,9,7,3,7,5,7,9};
	int n=sizeof(arr)/sizeof(int);
	cout<<boolalpha<<is7persent(arr,n)<<" 7 is presnt"<<endl;
	cout<<"fist 7 at index::"<<first7(arr,n,0)<<endl;
	cout<<"last 7 at index::"<<last7(arr,n)<<endl;
	all7(arr,n,0);
	return 0;
}