#include <iostream>
using namespace std;

int main(){
	int a[]={1,2,3,4,5};
	cout<<"Adderes of a is:"<<a<<endl;
	cout<<"Adderes of a[0] is:"<<&a[0]<<endl;
	int *ptr=a;
	cout<<"Adderes of a in *ptr is:"<<ptr<<endl;
	cout<<"a[0]="<<a[0]<<"="<<*ptr<<endl;
	cout<<"a[1]="<<a[1]<<"="<<*(ptr+1)<<endl;
	cout<<"a[2]="<<a[2]<<"="<<*(ptr+2)<<endl;
	cout<<"a[3]="<<a[3]<<"="<<*(ptr+3)<<endl;
	cout<<"a[4]="<<a[4]<<"="<<*(ptr+4)<<endl;
	return 0;
}