#include<iostream>
using namespace std;
int n;
int arr [1000]={0};
void invert(int l ,int i){
	if (i<l){
		swap(arr[i],arr[l-1]);
		l--;
		i++;
		invert(l,i);
	}
}
int main() {
	
	cin>>n;
	
	for (int i=0;i<n;i++ ){
		int e;
		cin>>e;
		arr[i]=e;
	}
	invert(n,0);
	for (int i=0;i<n;i++){
		cout<<arr[i]<<' ';
	}
	return 0;
}