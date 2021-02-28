#include <iostream>
using namespace std;
int length(char *arr){
	int i=0;
	int co=0;
	while(arr[i]!='\0'){
		i++;
		co++;
	}
	return co;
}
int main(){
	int n;
	cin>>n;
	cin.ignore();
	char arr[100];
	cin>>arr;
	int l=length(arr);
	for(int j=l-1; j>=0; j--){
		arr[j+n]=arr[j];
	}
	// for(int i=0; i<n; i++){
	// 	arr[i]=arr[l+i];
	// 	if(i==n-1){
	// 		arr[l]='\0';
	// 	}
	// }
	
	int k=l;
	int le=0;
	for(int i=0; i<n; i++){
		arr[le]=arr[k];
		k++;
		le++;
	}
	arr[l]='\0';
	cout<<arr;
}