#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	for (int i=1; i<=n; i++){
		char ch='A';
		//characters in increasing order
		for (int j=1; j<=n-i+1; j++){
			cout<<ch;
			ch++;
		}
		ch--;
		//characters in decreasing order
		for (int j=1; j<=n-i+1; j++){
			
			cout<<ch;
			ch--;
		}
		cout<<endl;
	}
	return 0;
}