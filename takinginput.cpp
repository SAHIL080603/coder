#include <iostream>
using namespace std;
int main()
{
	cout<<"enter a number::";
	int a,d,n,i=0;
	cin>>a;
	cout<<endl<<"enter common difference::";
	cin>>d;
	cout<<endl<<"enter number of terms::";
	cin>>n;
	while(i<=n){
		cout<<a+(i*d)<<"   ";
	    i=i+1;
	}

	/* code */
	return 0;
}