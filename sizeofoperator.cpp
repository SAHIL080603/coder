#include <iostream>
using namespace std;
int main(){
	int a=sizeof(int) ,b=12 ;
	cout<<"int ::"<<a<<endl;
	a=sizeof(char)  ;
	cout<<"char ::"<<a<<endl;
	a=sizeof(float)  ;
	cout<<"float ::"<<a<<endl;
	a=sizeof(double)  ;
	cout<<"double ::"<<a<<endl;
	a=sizeof(bool)  ;
	cout<<"bool ::"<<a<<endl;
	a=sizeof(10.5)  ;
	cout<<"10.5 ::"<<a<<endl;
	a=sizeof(b)  ;
	cout<<"variable b is ::"<<a<<endl;
	a=sizeof(long long int)  ;
	cout<<"long long int ::"<<a<<endl;
//we can give data type or variable name or direct vaule  
	return 0;
}
