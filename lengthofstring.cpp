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
bool ispalinornot(char *a){
	int i=0;
	int j=length(a)-1;
	while(i<j){
		if(a[i]!=a[j]){
			return false;
		}
		i++;
		j--;
	}
	return true;
}
void reverse(char *a){
	int i=0;
	int j=length(a)-1;
	while(i<j){
		swap(a[i],a[j]);
			
		i++;
		j--;
	}
}
int main()
{
	char arr[100];
	cin>>arr;
	cout<<"lenth of string:"<<length(arr)<<endl;
	if(ispalinornot(arr)){
		cout<<"yes"<<endl;
	}
	else if(ispalinornot(arr)==0){
		cout<<"no"<<endl;
	}
	reverse(arr);
	cout<<"reversed string::"<<arr;
	/* code */
	return 0;
}