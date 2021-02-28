#include <iostream>
using namespace std;
int main()
{
	char arr[100];
	int n;
	char ch;
	cin>>n;
	cin.ignore(); //ignores 1 character //but it is a better way
	// ch=cin.get(); //ignoring by another way
	cin.getline(arr,100); // take the whole paragraph whose size is 100 include " "and "\n"
	cout<<n<<endl;
	cout<<arr<<endl;
	return 0;
}