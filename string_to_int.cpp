#include <bits/stdc++.h>
using namespace std;

int stringtoint(char *a,int n){
	
	if(n==0){
		return 0;
	}
	int digit=a[n-1]-'0';
	return stringtoint(a,n-1)*10+digit;
} 
int main(){
	char arr[100];
	cin>>arr;
	int n=strlen(arr);
	int x=stringtoint(arr,n);
	int y=x+100;
	cout<<x<<endl;
	cout<<y<<endl;
	return 0;
}