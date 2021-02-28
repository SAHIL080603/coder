//noprime
#include <iostream>
using namespace std;
int main()
{
	int i=2,n;
	cout<<"enter the number upto::";
	cin>>n;
	cout<<"List of prime number are::"<<endl;
	for (i;i<=n-1;i++){
		for (int c=1;c<=i-1;c++){
			if (i%c!=0){
				cout<<i;
			}
		}
	}

    cout<<endl;
	/* code */
	return 0;
}