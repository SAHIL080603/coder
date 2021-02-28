//scopeofavarable
#include <iostream>  
using namespace std;
int y=50; // global variable
int main(){
	int x=10;
	cout<<"value of x is::"<<x<<endl;
	if(x>0){
		int y=20;
		cout<<"value of x is::"<<x<<endl;
		cout<<"value of y is::"<<::y<<endl;//scope resolution operator
	}
	cout<<"value of x is::"<<x<<endl;
	cout<<"value of y is::"<<y<<endl;

	return 0;
} 