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
	int key,flag=0;
	cout<<"enter key to be searched for== ";
	cin>>key;
	for (int i=0; i<n; i++){
		if (key==arr[i]){
			cout<<"key found at index=="<<i;
			flag=1;
			break;
		}
	}
	if(flag==0){
		cout<<"key not found ";
	}
	return 0;
}