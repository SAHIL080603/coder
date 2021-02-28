#include <iostream>
using namespace std;
bool issortedornot(int *a,int n){
	//base case
	if(n==1){
		return true;
	}

	//recursive
	bool issor=issortedornot(a+1,n-1);
	if(a[0]<a[1] && issor==true){
		return true;
	}
	return false;
}
int main(){
	int a[]={1,4,5,8,9,10}; 
	int n=sizeof(a)/sizeof(int);
	cout<<boolalpha<<issortedornot(a,n)<<endl;
	return 0;
}