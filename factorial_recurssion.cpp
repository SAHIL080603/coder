#include <iostream>
using namespace std;
int fact(int n){
	//base case
	if(n==0){
		return 1;
	}

	//recursive
	int chotiproblem=fact(n-1);

	//find ans with the help of above two
	int badiproblem=n*chotiproblem; 

	return badiproblem;
}
int main(){
	int n; 
	cin>>n;
	cout<<fact(n)<<endl;
	return 0;
}