//allprime
#include <iostream>
using namespace std;
int main()
{
	int i=2,n;
	cout<<"enter the number upto::";
	cin>>n;
	cout<<"List of prime number are::"<<endl;
	while (i<=n){
		int c=2;
		while (c<=i){
			if (i%c==0 && c<i){
				
				break;
			}
			else if (i%c!=0){
				c++;
				continue;
				
			}
			c++;
			cout<<i<<",";
		}
		i++;

	}

    cout<<endl;
	/* code */
	return 0;
}