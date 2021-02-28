#include <iostream>
using namespace std;
int main(){
	int a=10;
	float f=10.14;
	double d=40.345;
	
	cout<<"value of a:"<<a<<endl;
	cout<<"value of f:"<<f<<endl;
	cout<<"value of d:"<<d<<endl<<endl;


	//address of variable bucket
	cout<<"address of a:"<<&a<<endl;
	cout<<"address of f:"<<&f<<endl;
	cout<<"address of d:"<<&d<<endl;
	cout<<endl;


	cout<<"size of &a:"<<sizeof(&a)<<endl;
	cout<<"size of &f:"<<sizeof(&f)<<endl;
	cout<<"size of &d:"<<sizeof(&d)<<endl;
	//storing adderess in a pointers
	int b=10;
	int* v=&a; //v is a pointer not an varable
	cout<<"addres of a:"<<v<<endl;
	cout<<"addres of a+1:"<<v+1<<endl;
	int* e=&b; //v is a pointer not an varable
	cout<<"addres of b:"<<e<<endl;
	cout<<"addres of b+2:"<<e+2<<endl;
	char ch='A';
	cout<<"value of ch is:"<<ch<<endl;
	cout<<"addres of ch:"<<&ch<<endl;
	//fooling compiler
	cout<<"addres of ch:"<<(int *)&ch<<endl;
	cout<<"addres of ch:"<<(double *)(&ch+1)<<endl;
	cout<<endl<<endl;
	cout<<"value of a is defrering v as *v:"<<*v<<endl;//derefering operator
						//(float *)
						//(void *)
	return 0;
}