#include <iostream>
using namespace std;
int sumarray(int *a,int n){
	//base case
	if(n==0){
		return 0;
	}

	//recursive
	int chotiproblem=sumarray(a+1,n-1);
	int badiproblem=a[0]+chotiproblem;
	return badiproblem;
}
int main(){
	int a[]={}; 
	int n=sizeof(a)/sizeof(int);
	cout<<sumarray(a,n)<<endl;
	return 0;
}