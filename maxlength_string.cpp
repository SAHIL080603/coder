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
void copy(char *maxstring,char *arr){
	int l=length(arr);
	for(int i=0; i<=l; i++){
		maxstring[i]=arr[i];
	}
}
int main(){
	int n;
	cin>>n;
	cin.ignore();
	char maxstring[100];
	char arr[100];
	int maxlength=0;
	
	for(int i=0;i<n; i++){
		cin>>arr;
		int l=length(arr);
		if(maxlength<l){
			maxlength=l;
			copy(maxstring,arr);
		}

	}
	cout<<"maxlength is =="<<maxlength<<endl;
	cout<<"max length string is '"<<maxstring<<"'"<<endl;
}