#include<iostream>
using namespace std;
int main() {
	int a,b,gcd;
	cin>>a>>b;
	int c;
	if (a>b){
		c=b;
	}
	else{
		c=a;
	}
	for (int i=1; i<=c; i++){
		if (a%i==0 && b%i==0){
			gcd=i;
		}
	}
	cout<<gcd;
	return 0;
}