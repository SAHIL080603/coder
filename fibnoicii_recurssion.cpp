#include <iostream>
using namespace std;
int fibno(int n){
	//base case
	if(n==1){
		return 0;
	}
	if(n==2){
		return 1;
	}

	//recursive
	int chotiproblem1=fibno(n-1);
	int chotiproblem2=fibno(n-2);

	// find ans with the help of above two
	int badiproblem=chotiproblem1+chotiproblem2; 

	return badiproblem;
}
int main(){
	int n; 
	cin>>n;
	cout<<fibno(n)<<endl;
	return 0;
}