#include <iostream>
using namespace std;
int add(int a,int b=0, int c=0, int d=0){
	return a+b+c+d; //first non default variables then default variables
}
int main()
{
	cout<<add(5,6,7)<<endl;
	cout<<add(5,6,7,9)<<endl;
	cout<<add(5,6)<<endl;
	cout<<add(1)<<endl;
	cout<<add(5)<<endl;
	/* code */
	return 0;
}