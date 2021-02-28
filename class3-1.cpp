#include <iostream>
using namespace std;
int main()
{
	cout<<"enter a number::";
	
	int a=0,i=2,r;
	cin>>a;
	while (i<a){
		r=a%i;
		
		if (r==0){
			cout<<"entered number is not prime";
			return 0;
		} 
		i=i+1;

	}
	
	/* code */
	return 0;
}