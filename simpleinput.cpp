//simpleinput
#include<iostream>
using namespace std;
int main() {
	int n=0;
	while (n>=0){
		int i;
		cin>>i;
		n=n+i;
		if (n>=0){
			cout<<i;
		}
	}
	return 0;
}