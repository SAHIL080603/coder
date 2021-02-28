#include <iostream>
using namespace std;
int main(){
	int a,b,c;
	cin>>a>>b>>c;
	if (a>=b && a>=c){
		cout<<"a is largest number:"<<a;
	}
	else if (b>=a && b>=c){
		cout<<"b is largest number:"<<b;
	}
	else{
		cout<<"c is largest number:"<<c;
	}
	return 0;
}