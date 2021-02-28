//prime
# include <iostream>
using namespace std;
int main()
{
	int i=2,n;
	cout<<"enter a number ::";
	cin>>n;
	while(i!=n-1){
		if (n%i==0){
			cout<<"entered number is not prime";
			return 0;
		}
		i++;
	}
	cout<<"Prime number"<<n;
    cout<<endl;
	/* code */
	return 0;
}